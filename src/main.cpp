#include <iostream>
#include <fstream>
#include <vector>

#include "file_mgt/file.hpp"
#include "render/canvas/canvas.hpp"
#include "render/Line/Line.hpp"


int main()
{
    Canvas canvas(600, 600); // Create a new canvas
    Line line(&canvas);
    for (int i = 0; i <  canvas.get_width() * canvas.get_height() * 3; i += 3)
    {
        canvas.draw_point(i, 0, 0, 0);
    }
    line.set_line_points(0, 0, 600, 600);
    line.drawline();
    std::string filename = "file.ppm";
    SavePPM file(filename, canvas);
}