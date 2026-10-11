#include <iostream>
#include <fstream>
#include <vector>

#include "file.hpp"
#include "../render/canvas/canvas.hpp"

void SavePPM::save_file()
{
    std::ofstream outfile(filename, std::ios::binary);
    outfile << "P6\n"<< width << " " << height << "\n" << "255\n";
    outfile.write(reinterpret_cast<char*>(pixels.data()), pixels.size());
    outfile.close();
}

SavePPM::SavePPM(std::string name,std::vector<unsigned char> pixel_vector ,int x, int y)
{
    filename = name;
    pixels = pixel_vector;
    width  = x;
    height = y;
    save_file();
}

SavePPM::SavePPM(std::string name, Canvas canvas)
{
    filename = name;
    pixels = canvas.get_pixels();
    width = canvas.get_width();
    height = canvas.get_height();
    save_file();
}