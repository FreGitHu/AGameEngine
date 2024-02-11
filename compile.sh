#!/bin/bash

shopt -s globstar # enable global star

gcc -O3 -o engine.so -shared -fPIC ./engine/**/*.c -lGL -lGLU -lglut # Compile the engine
gcc -g -O3 -o debug-engine.so -shared -fPIC ./engine/**/*.c -lGL -lGLU -lglut # Compile the engine for debugging