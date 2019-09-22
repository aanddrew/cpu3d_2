#ifndef CAMERA_H
#define CAMERA_H

#include "../math/Vec3.h"
#include "../math/Vec2.h"
#include "Triangles.h"

struct Camera {
	Vec3 position;
	Vec3 forward, up, right;
};

Triangle2D project_triangle(struct Camera camera, Triangle3D input_triangle);
Vec2 project_point(struct Camera camera, Vec3 point);

#endif
