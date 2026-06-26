#include <iostream>

class rgbh
{
    int image_width = 600;
    int image_height = 600;

public:

    void render()
    {
        std::cout << "P3\n" << image_width << " " << image_height << "\n255\n";

        for (int j = 0; j < 200; j++)
        {
            for (int i = 0; i < 600; i++)
            {
                std::cout << 255.999 << " " << 0 << " " << 0 << "\n";
            }
        }

        for (int j = 0; j < 200; j++)
        {
            for (int i = 0; i < 600; i++)
            {
                std::cout << 0 << " " << 255.999 << " " << 0 << "\n";
            }
        }

        for (int j = 0; j < 200; j++)
        {
            for (int i = 0; i < 600; i++)
            {
                std::cout << 0 << " " << 0 << " " << 255.999 << "\n";
            }
        }
    }
};