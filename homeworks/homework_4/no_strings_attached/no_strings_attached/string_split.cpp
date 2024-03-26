#include "string_split.h"
#include <vector>
#include <string>
namespace strman {
    std::vector<std::string> Split(const std::string& str, const std::string& delimiter) {
        if(delimiter.empty()) {
            return std::vector { str };
        }

        std::vector<std::string> splitString { };
        std::string substring {};
        std::size_t strIndex = 0;
        while(strIndex < str.length()) {
            if(str.substr(strIndex,  delimiter.length()) == delimiter) {
                splitString.push_back(substring);
                substring.clear();
                strIndex += delimiter.length();
            } else {
                substring.append(str, strIndex, 1);
                ++strIndex;
            }
        }
        // Add the last substring
        splitString.push_back(substring);
        return splitString;
    }
}
