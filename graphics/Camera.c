#include "Camera.h"

Triangle2D project_triangle(struct Camera camera, Triangle3D input_triangle) {
	Triangle2D projected_triangle = {
		project_point(camera, input_triangle.p1),
		project_point(camera, input_triangle.p2),
		project_point(camera, input_triangle.p3)
	};
	return projected_triangle;
}
Vec2 project_point(struct Camera camera, Vec3 point) {
	Vec3 relative_point = Vec3_subtract(point, camera.position);
	//assume that camera's frame is normalized
	float proj_x = Vec3_dot(relative_point, camera.right);
	float proj_y = Vec3_dot(relative_point, camera.up);
	float proj_z = Vec3_dot(relative_point, camera.forward);

	Vec2 projected_point = {proj_x / proj_z, proj_y / proj_z};
	return projected_point;
}
