#include <iostream>
#include <cstdlib>

int main()
{
    int height;
    std::cin >> height;
    for (int i = 1; i < height * 2; i++)
    {
        for (int j = -height + 1; j < height; j++)
        {
            if (i <= height)
            {
                if (-abs(j) + i >= 1)
                    std::cout << '*';
                else
                    std::cout << ' ';
            }
            else
            {
                if (abs(j) + i >= height * 2) 
                    std::cout << ' ';
                else
                    std::cout << '*';
            }
        }
        std::cout << std::endl;
    }

    return 0;
}