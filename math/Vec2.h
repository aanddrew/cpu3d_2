#ifndef VEC2_H
#define VEC2_H

#include <math.h>

typedef struct {
	float x, y;
} Vec2;

float Vec2_dot(Vec2 first, Vec2 second) {
	return first.x * second.x + first.y * second.y;
}

/*
Vec2 Vec2_cross(Vec2 first, Vec2 second) {
	Vec2 cross;
	cross.x = second.z*first.y - second.y*first.z;
	cross.y = -1*(second.z*first.x - second.x*first.z);
	cross.z = second.y*first.x - second.x*first.y;
	return cross;
}
*/

float Vec2_magnitude_squared(Vec2 vec) {
	return vec.x*vec.x + vec.y*vec.y;
}

float Vec2_magnitude(Vec2 vec) {
	return sqrt(Vec2_magnitude_squared(vec));
}

Vec2 Vec2_add(Vec2 first, Vec2 second) {
	Vec2 result = {first.x + second.x, first.y + second.y};
	return result;
}

Vec2 Vec2_subtract(Vec2 first, Vec2 second) {
	Vec2 result = {first.x - second.x, first.y - second.y};
	return result;
	
}

Vec2 Vec2_multiply(Vec2 first, float scalar) {
	Vec2 result = {first.x * scalar, first.y * scalar};
	return result;
}

Vec2 Vec2_divide(Vec2 first, float scalar) {
	Vec2 result = {first.x / scalar, first.y / scalar};
	return result;
}

Vec2 Vec2_normalize(Vec2 vec) {
	Vec2 normalized_result = Vec2_divide(vec, Vec2_magnitude(vec));
	return normalized_result;
}

#endif
