#ifndef FRAMEBUFFER_H
#define FRAMEBUFFER_H

//5 brightness bits, 3 color bits
typedef unsigned char pixel_t;

struct Framebuffer {
	int w, h;
	pixel_t* pixels;
};

void rasterize_triangle(struct Framebuffer* buffer, struct Triangle2D triangle);
void update_dimensions(struct Framebuffer* buffer);
void clear(struct Framebuffer* buffer, pixel_t color);
void show(struct Framebuffer* buffer);

#endif
