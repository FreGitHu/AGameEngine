#include<../../shared.h>
#include<stdint.h>
#include<stdlib.h>

struct ObjectI createObjectI(int64_t x, int64_t y, int64_t z, enum ObjectType type, struct ObjectI* parent);
struct ObjectI createObjectIShort(enum ObjectType type, struct ObjectI* parent);
struct ObjectI createObjectILong(int64_t x, int64_t y, int64_t z, enum ObjectType type, struct ObjectI* parent, char* attrs);

struct ObjectF createObjectF(double x, double y, double z, enum ObjectType type, struct ObjectI* parent);
struct ObjectF createObjectFShort(enum ObjectType type, struct ObjectI* parent);
struct ObjectF createObjectFLong(double x, double y, double z, enum ObjectType type, struct ObjectI* parent, char* attrs);