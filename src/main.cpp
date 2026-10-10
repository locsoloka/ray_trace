#include <iostream>
#include <fstream>
#include <vector>

#include "file_mgt/file.hpp"
#include "render/basic_operations/basic_operations.hpp"

int main()
{
    int width = 100;
    int height = 100;
    
    std::vector<unsigned char> pixels(width * height * 3);
    
    for (int i = 0; i < width * height * 3; i += 3)
    {
        pixels[i]     = 0; // R (Piros)
        pixels[i + 1] = 0;   // G (Zöld)
        pixels[i + 2] = 0;   // B (Kék)
    }
    plotline(0, 0, 100, 100, pixels);
    std::string filename = "file.ppm";
    SavePPM file(filename, pixels, width, height);
}