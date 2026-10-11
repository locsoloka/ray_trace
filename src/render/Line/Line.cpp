#include <vector>
#include <cmath>

void plotline(int x0,int y0,int x1,int y1, std::vector<unsigned char>& pixel_vector)
{
    int width = 100; 

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
        if (x >= 0 && x < width && y >= 0 && y < width) 
        {
            int cursor = (y * width + x) * 3;
            pixel_vector[cursor]     = 255; // R
            pixel_vector[cursor + 1] = 255; // G
            pixel_vector[cursor + 2] = 255; // B
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