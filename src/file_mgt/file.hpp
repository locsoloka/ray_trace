#ifndef FILE_HPP
#define FILE_HPP

#include <string>
#include <vector>

#include "../render/canvas/canvas.hpp"

class SavePPM
{
    private:
        void save_file();

    public:
        int width ;
        int height;
        std::vector<unsigned char> pixels;
        std::string filename;

        SavePPM(std::string name, std::vector<unsigned char> pixel_vector ,int x, int y);
        SavePPM(std::string name, Canvas canvas);
    };

#endif