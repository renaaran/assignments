/**
 * @file assignment_3.cpp
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

void print_array(const std::vector<int> &v) {
    std::cout << "===========> " << v.size() << std::endl;
    for (auto e: v) {
        std::cout << e << ' ';
    }
    std::cout << std::endl;
}
int main() {
    std::string s{"Renato Barros Arantes renato"};
    print_array(FindAll(s, "Barros"));
    print_array(FindAll(s, "barros"));
    print_array(FindAll(s, "barros", Case::SENSITIVE, 0));
    print_array(FindAll(s, "Arantes"));
    print_array(FindAll(s, "a", Case::SENSITIVE, 16));
    print_array(FindAll(s, "Renato"));
    print_array(FindAll(s, "Renato", Case::SENSITIVE, 0));
    std::vector<int> v = FindAll(s, "xyz");
    std::cout << v.size() << std::endl;
}