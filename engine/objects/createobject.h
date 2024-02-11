#include<../../shared.h>
#include<stdint.h>
#include<stdlib.h>

struct ObjectI createObjectI(int64_t x, int64_t y, int64_t z, enum ObjectType type, struct ObjectI* parent);
struct ObjectI createObjectI(enum ObjectType type, struct ObjectI* parent);
struct ObjectI createObjectI(int64_t x, int64_t y, int64_t z, enum ObjectType type, struct ObjectI* parent, char* attrs);

struct ObjectI createObjectF(double x, int64_t y, double z, enum ObjectType type, struct ObjectI* parent);
struct ObjectI createObjectF(enum ObjectType type, struct ObjectI* parent);
struct ObjectI createObjectF(double x, double y, double z, enum ObjectType type, struct ObjectI* parent, char* attrs);