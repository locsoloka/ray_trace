#include <vector>
#include <cmath>

#include "Line.hpp"

Line::Line(Canvas *canvas)
:   canvas(canvas)
{

}

void Line::set_line_points(int x0_in, int y0_in, int x1_in, int y1_in)
{
    x0 = x0_in;
    y0 = y0_in;
    x1 = x1_in;
    y1 = y1_in;
}

void Line::drawline()
{

    int dx = std::abs(x1 - x0);
    int sx = x0 < x1 ? 1 : -1;
    int dy = -std::abs(y1 - y0);
    int sy = y0 < y1 ? 1 : -1;
    int err = dx + dy;  /* error value e_xy */
    
    int x = x0;
    int y = y0;

    while (true)
    {
        // Check boundaries to prevent out-of-bounds crashes
        if (x >= 0 && x < canvas->get_width() && y >= 0 && y < canvas->get_width()) 
        {
            int cursor = (y * canvas->get_width() + x) * 3;
            canvas->draw_point(cursor, 255, 255, 255);
        }

        if (x == x1 && y == y1) break;
        int e2 = 2 * err;
        if (e2 >= dy) 
        {
            err += dy;
            x += sx;
        }
        if (e2 <= dx) 
        {
            err += dx;
            y += sy;
        }

}}