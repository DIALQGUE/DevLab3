#include <iostream>
#include <iomanip>

int main() {
    float thai, math, english, science, sport, gpa;
    std::cin >> thai >> math >> english >> science >> sport;
    gpa = (thai + math + english + science + sport) / 5;
    std::cout << std::setprecision(1) << std::fixed;
    std::cout << "THAI = " << thai << std::endl;
    std::cout << "MATH = " << math << std::endl;
    std::cout << "ENGLISH = " << english << std::endl;
    std::cout << "SCIENCE = " << science << std::endl;
    std::cout << "SPORT = " << sport << std::endl;
    std::cout << "---" << std::endl << "GPA = " << gpa;
}