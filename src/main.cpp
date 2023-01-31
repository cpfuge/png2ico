#include "png.hpp"
#include "ico.hpp"

#include <iostream>

static inline void print_help()
{
    std::cout << "No input files specified\n";
    std::cout << "Usage: png2ico iconfile.ico pngfile1 [pngfile2 ...]\n";
}

int main(int argc, char* argv[])
{
    if (argc < 3)
    {
        print_help();
        return -1;
    }

    std::vector<PngImage> png;
    for (int index = 2; index < argc; index++)
    {
        PngImage image;
        if (!read_png_file(argv[index], &image))
            return -1;
        png.push_back(image);
    }

    if (!write_ico_file(argv[1], png))
        return -1;

    return 0;
}
