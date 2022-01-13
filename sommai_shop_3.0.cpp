#include <iostream>
#include <string>
#include <vector>

class CUSTOMER
{
private:
    std::string name, lastname, sex;
    int year;

public:
    CUSTOMER()
    {
        name = "";
        lastname = "";
        year = 0;
        sex = "";
    }
    CUSTOMER(std::string name, std::string lastname, int year, std::string sex)
    {
        this->name = name;
        this->lastname = lastname;
        this->year = year;
        this->sex = sex;
    }
    void print(){
        std::cout << this->name << ' ' << this->lastname << ' ' << "(age : " << 2017 - this->year << ')' << std::endl;
    }
};

int main()
{
    int number;
    std::vector<CUSTOMER> database;
    std::cin >> number;
    for(int i = 0; i < number; i++)
    {
        std::string name, lastname, sex;
        int year;
        std::cin >> name >> lastname >> year >> sex;
        database.push_back(CUSTOMER(name, lastname, year, sex));
    }
    std::cout << "--Customers Information--" << std::endl;
    for(int i = 0; i < number; i++)
        database[i].print();
    return 0;
}