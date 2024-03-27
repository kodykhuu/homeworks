#include <no_strings_attached/string_trim.h>
#include <iostream>
#include <string>

int main() {
    std::cout << "Example program that trims strings.\n";
    std::cout << "Please enter a string:\n";

    std::string input {};
    std::getline(std::cin, input);

    std::cout << "Your trimmed string: '" << no_strings_attached::Trim(input) << "\'\n";

    return 0;
}