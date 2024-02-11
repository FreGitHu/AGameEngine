#include "../shared.h"
#include <stdio.h>
#include "pthread.h"
#include "renderer/renderer.h"

struct ObjectI objectsI[2];
struct ObjectF objectsF[2];


int initEngine() {
    struct ObjectI workspace;
    struct ObjectI cube;
    workspace.type = Container;
    workspace.parent = NULL;
    cube.type = PartCube;

    workspace.numchildren++;
    workspace.children[workspace.numchildren-1] = cube;
    cube.parent = &workspace;
    cube.numchildren = 0;

    objectsI[0] = workspace;

    pthread_t renderer;

    if (pthread_create(&renderer, NULL, render_thread,(void*)&objectsI[0]) != 0) {
        perror("pthread_create");
        return 1;
    }

    // Wait for the thread to finish
    if (pthread_join(renderer, NULL) != 0) {
        perror("pthread_join");
        return 1;
    }
    
    return 0;
}
