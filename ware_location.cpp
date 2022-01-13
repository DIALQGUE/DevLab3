#include <iostream>
#include <string>
#include <vector>

int main()
{
    int number;
    std::string ware;
    std::vector<std::string> shelf;
    std::vector<int> found;

    std::cin >> number;
    for (int i = 0; i < number; i++)
    {
        std::cin >> ware;
        shelf.push_back(ware);
    }

    std::cin >> ware;
    for (int i = 0; i < number; i++)
    {
        if (shelf[i].compare(ware) == 0)
            found.push_back(i);
    }

    if (found.empty())
        std::cout << "Not Found";
    else
    {
        std::cout << "Position: ";
        for (int i = 0; i < found.size(); i++)
        {
            std::cout << found[i] + 1;
            if (i < found.size() - 1)
                std::cout << ',';
        }
    }
    return 0;
}