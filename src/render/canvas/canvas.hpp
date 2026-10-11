#ifndef CANVAS_HPP
#define CANVAS_HPP

#include <vector>

class Canvas
{
    private:
        int width;
        int height;
        std::vector<unsigned char> pixels;

    public:

        Canvas(int x, int y);
        void draw_point(int cursor, unsigned char r, unsigned char g, unsigned char b);
        int get_width();
        int get_height();
        std::vector<unsigned char> get_pixels();
    };

#endif