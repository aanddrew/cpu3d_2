#ifndef TRIANGLES_H
#define TRIANGLES_H

#include "../math/Vec3.h"
#include "../math/Vec2.h"

typedef struct {
	Vec2 p1, p2, p3;
} Triangle2D;

typedef struct {
	Vec3 p1, p2, p3;
} Triangle3D;

#endif
