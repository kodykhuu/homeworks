#include <no_strings_attached/string_split.h>
#include <iostream>
#include <string>

int main() {
    std::cout << "Example program that splits strings.\n";
    std::cout << "Please enter a string:\n";

    std::string input {};
    std::getline(std::cin, input);

    std::cout << "Your split string:";
    for(const auto& str : strman::Split(input, " ")) {
        std::cout << '\'' << str << "\' ";
    }
    std::cout << '\n';
    return 0;
}