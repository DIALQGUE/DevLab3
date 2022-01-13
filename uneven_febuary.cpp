#include <iostream>

int main()
{
    int year;
    std::cin >> year;
    
    if(year % 4 == 0) {
        if(year % 100 != 0 || year % 400 == 0)
            std::cout << "Leap Year";
        else
            std::cout << "Not a Leap Year";
    }
    else
        std::cout << "Not a Leap Year";
}