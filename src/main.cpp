#include <iostream>
#include <fstream>
#include <vector>

#include "file_mgt/file.hpp"
#include "render/canvas/canvas.hpp"



int main()
{
    Canvas canvas(600, 600); // Create a new canvas
    for (int i = 0; i <  canvas.get_width() * canvas.get_height() * 3; i += 3)
    {
        canvas.draw_point(i, 255, 255, 255);
    }
    std::string filename = "file.ppm";
    SavePPM file(filename, canvas);
}