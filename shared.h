#pragma once
#include<stdint.h>
#include<float.h>

enum ObjectType {
Script,
LibScript,
PartCube,
MeshPart,
Container
};

struct ObjectI
{
    int64_t x;
    int64_t y;
    int64_t z;
    int64_t id;
    enum ObjectType type;
    char* attrs;
    struct ObjectI* children;
    unsigned int numchildren;
    struct ObjectI* parent;
};

struct ObjectF
{
    double x;
    double y;
    double z;
    int64_t id;
    enum ObjectType type;
    char* attrs;
    struct ObjectF* children;
    unsigned int numchildren;
    struct ObjectF* parent;
};
