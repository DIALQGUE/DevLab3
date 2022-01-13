#include <iostream>
#include <cstdlib>

int main()
{
  int height;
  std::cin >> height;
  for(int i = 0; i < height; i++) {
    for(int j = - height + 1; j < height; j++) {
      if(- abs(j) + i >= 0)
        std::cout << '*';
       else
        std::cout << ' ';
    }
    std::cout << std::endl;
  }

	return 0;
}