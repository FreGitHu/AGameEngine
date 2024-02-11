#include "createobject.h"

struct ObjectI createObjectI(int64_t x, int64_t y, int64_t z, enum ObjectType type, struct ObjectI* parent) {
    struct ObjectI output;
    output.x = x;
    output.y = y;
    output.z = z;
    output.type = type;
    output.parent = parent;
    output.attrs = NULL;
    output.numchildren = 0;
    output.children = NULL;
    return output;
};

struct ObjectI createObjectIShort(enum ObjectType type, struct ObjectI* parent) {
    struct ObjectI output;
    output.x = 0;
    output.y = 0;
    output.z = 0;
    output.type = type;
    output.parent = parent;
    output.attrs = NULL;
    output.numchildren = 0;
    output.children = NULL;
    return output;
};

struct ObjectI createObjectILong(int64_t x, int64_t y, int64_t z, enum ObjectType type, struct ObjectI* parent, char* attrs) {
    struct ObjectI output;
    output.x = x;
    output.y = y;
    output.z = z;
    output.type = type;
    output.parent = parent;
    output.attrs = attrs;
    output.numchildren = 0;
    output.children = NULL;
    return output;
};


struct ObjectF createObjectF(double x, double y, double z, enum ObjectType type, struct ObjectF* parent) {
    struct ObjectF output;
    output.x = x;
    output.y = y;
    output.z = z;
    output.type = type;
    output.parent = parent;
    output.attrs = NULL;
    output.numchildren = 0;
    output.children = NULL;
    return output;
};

struct ObjectF createObjectFShort(enum ObjectType type, struct ObjectF* parent) {
    struct ObjectF output;
    output.x = 0;
    output.y = 0;
    output.z = 0;
    output.type = type;
    output.parent = parent;
    output.attrs = NULL;
    output.numchildren = 0;
    output.children = NULL;
    return output;
};

struct ObjectF createObjectFLong(double x, double y, double z, enum ObjectType type, struct ObjectF* parent, char* attrs) {
    struct ObjectF output;
    output.x = x;
    output.y = y;
    output.z = z;
    output.type = type;
    output.parent = parent;
    output.attrs = attrs;
    output.numchildren = 0;
    output.children = NULL;
    return output;
};