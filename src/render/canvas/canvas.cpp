#include "canvas.hpp"

Canvas::Canvas(int x, int y)
    : width(x), height(y), pixels(x * y * 3)
{
}

void Canvas::draw_point(int cursor, unsigned char r, unsigned char g, unsigned char b)
{
    pixels[cursor] = r;
    pixels[cursor + 1] = g;
    pixels[cursor + 2] = b;
}

int Canvas::get_width()
{
    return width;
}
int Canvas::get_height()
{
    return height;
}
std::vector<unsigned char> Canvas::get_pixels()
{
    return pixels;
}