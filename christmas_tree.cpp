#include <iostream>
#include <cstdlib>

int main()
{
    int height;
    std::cin >> height;
    for (int k = 2; k <= height + 1; k++)
    {
        for (int i = 0; i < k; i++)
        {
            for (int j = height - k; j >= 0; j--)
                std::cout << ' ';
            for (int j = -k + 1; j < k; j++)
            {
                if (-abs(j) + i >= 0)
                    std::cout << '*';
                else
                    std::cout << ' ';
            }
            std::cout << std::endl;
        }
    }
    for (int i = 0; i < height; i++)
        std::cout << ' ';
    std::cout << '|' << std::endl;

    for (int i = 0; i < height; i++)
        std::cout << '=';
    std::cout << 'V';
    for (int i = 0; i < height; i++)
        std::cout << '=';
}