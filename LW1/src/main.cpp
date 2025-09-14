#include <iostream>
#include <string>

#include "../include/replacer.h"

int main()
{
    std::string str{};

    std::cout << "Input your string: ";
    std::cin >> str;
    replacer(str);
    std::cout << "Your string is: " << str << std::endl;

    return 0;
}