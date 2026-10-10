#include <iostream>
#include <fstream>
#include <vector>

#include "file_mgt/file.hpp"

int main()
{
    int width = 10;
    int height = 10;
    
    std::vector<unsigned char> pixels(width * height * 3);
    
    for (int i = 0; i < width * height * 3; i += 3)
    {
        pixels[i]     = 0; // R (Piros)
        pixels[i + 1] = 255;   // G (Zöld)
        pixels[i + 2] = 0;   // B (Kék)
    }
    std::string filename = "file.ppm";
    SavePPM file(filename, pixels, width, height);
}