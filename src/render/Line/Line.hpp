#ifndef BASIC_OPERATIONS_HPP
#define BASIC_OPERATIONS_HPP

#include <vector>

#include "../canvas/canvas.hpp"

class Line
{
    private:
        int x0;
        int y0;
        int x1;
        int y1;
        Canvas *canvas;
    public:
        void set_line_points(int x0, int y0, int x1, int y1);
        Line(Canvas *canvas);
        void drawline();
    };

#endif