#include <iostream>
#include <string>
#include <stack>
#include <sstream>

int main()
{
    std::stack<std::string> sentence;
    std::string word;
    std::getline(std::cin, word);
    std::istringstream iss(word);
    while (iss >> word)
        sentence.push(word);
    while (!sentence.empty()) {
        std::cout << sentence.top() << ' ';
        sentence.pop();
    }
    return 0;
}