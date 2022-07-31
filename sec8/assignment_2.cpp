/**
 * @file assignment_2.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include "assignfuns.h"

int main() {
    std::string s{"Renato Barros Arantes"};
    std::cout << Find(s, "Barros") << std::endl;
    std::cout << Find(s, "barros") << std::endl;
    std::cout << Find(s, "barros", Case::INSENSITIVE, 0) << std::endl;
    std::cout << Find(s, "Arantes") << std::endl;
    std::cout << Find(s, "s") << std::endl;
    std::cout << (Find(s, "xyz") == std::string::npos) << std::endl;
}