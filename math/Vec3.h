#ifndef VEC3_H
#define VEC3_H

#include <math.h>

typedef struct {
	float x, y, z; 
} Vec3;

float Vec3_dot(Vec3 first, Vec3 second) {
	return first.x * second.x + first.y * second.y + first.z * second.z;
}

Vec3 Vec3_cross(Vec3 first, Vec3 second) {
	Vec3 cross;
	cross.x = second.z*first.y - second.y*first.z;
	cross.y = -1*(second.z*first.x - second.x*first.z);
	cross.z = second.y*first.x - second.x*first.y;
	return cross;
}

float Vec3_magnitude_squared(Vec3 vec) {
	return vec.x*vec.x + vec.y*vec.y + vec.z*vec.z;
}

float Vec3_magnitude(Vec3 vec) {
	return sqrt(Vec3_magnitude_squared(vec));
}

Vec3 Vec3_add(Vec3 first, Vec3 second) {
	Vec3 result = {first.x + second.x, first.y + second.y, first.z + second.z};
	return result;
}

Vec3 Vec3_subtract(Vec3 first, Vec3 second) {
	Vec3 result = {first.x - second.x, first.y - second.y, first.z - second.z};
	return result;
	
}

Vec3 Vec3_multiply(Vec3 first, float scalar) {
	Vec3 result = {first.x * scalar, first.y * scalar, first.z * scalar};
	return result;
}

Vec3 Vec3_divide(Vec3 first, float scalar) {
	Vec3 result = {first.x / scalar, first.y / scalar, first.z / scalar};
	return result;
}

Vec3 Vec3_normalize(Vec3 vec) {
	Vec3 normalized_result = Vec3_divide(vec, Vec3_magnitude(vec));
	return normalized_result;
}

#endif
