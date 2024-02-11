#include"renderer.h"
#include <stdio.h>

struct ObjectI* workspace;

static void renderTreeI(struct ObjectI tree) {
    switch (tree.type)
    {
    case Script:
        printf("AGE001: Scripts can not be placed in the workspace.");
        exit(1);
        break;

    case PartCube:
        // Draw the cube
        glBegin(GL_QUADS);
    
        // Front face
        glColor3f(1.0, 0.0, 0.0); // Red
        glVertex3f(-1.0, -1.0, 1.0);
        glVertex3f(1.0, -1.0, 1.0);
        glVertex3f(1.0, 1.0, 1.0);
        glVertex3f(-1.0, 1.0, 1.0);

        // Back face
        glColor3f(0.0, 1.0, 0.0); // Green
        glVertex3f(-1.0, -1.0, -1.0);
        glVertex3f(-1.0, 1.0, -1.0);
        glVertex3f(1.0, 1.0, -1.0);
        glVertex3f(1.0, -1.0, -1.0);

        // Top face
        glColor3f(0.0, 0.0, 1.0); // Blue
        glVertex3f(-1.0, 1.0, -1.0);
        glVertex3f(-1.0, 1.0, 1.0);
        glVertex3f(1.0, 1.0, 1.0);
        glVertex3f(1.0, 1.0, -1.0);

        // Bottom face
        glColor3f(1.0, 1.0, 0.0); // Yellow
        glVertex3f(-1.0, -1.0, -1.0);
        glVertex3f(1.0, -1.0, -1.0);
        glVertex3f(1.0, -1.0, 1.0);
        glVertex3f(-1.0, -1.0, 1.0);

        // Right face
        glColor3f(1.0, 0.0, 1.0); // Magenta
        glVertex3f(1.0, -1.0, -1.0);
        glVertex3f(1.0, 1.0, -1.0);
        glVertex3f(1.0, 1.0, 1.0);
        glVertex3f(1.0, -1.0, 1.0);

        // Left face
        glColor3f(0.0, 1.0, 1.0); // Cyan
        glVertex3f(-1.0, -1.0, -1.0);
        glVertex3f(-1.0, -1.0, 1.0);
        glVertex3f(-1.0, 1.0, 1.0);
        glVertex3f(-1.0, 1.0, -1.0);

        glEnd();
            break;
    
    default:
        break;
    }
    for (size_t i = 0; i < tree.numchildren; i++)
    {
        renderTreeI(tree.children[1]);
    }
    
}

static void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    
    renderTreeI(*workspace);

    glutSwapBuffers();
}


static void render_thread(void* tree) {
    workspace = (struct ObjectI*)tree;
    glutInit(0, NULL);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("AGameEngine Preview (not for release)");

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glEnable(GL_DEPTH_TEST);

    glutDisplayFunc(display);
    glutMainLoop();
    
}