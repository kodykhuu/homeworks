#include "string_trim.h"

#include <string>

namespace no_strings_attached {
    std::string Trim(const std::string& str, char char_to_trim, Side side) {

        std::size_t leftInd = 0;
        while(leftInd < str.size() && str.at(leftInd) == char_to_trim) {
            ++leftInd;
        }
        if(leftInd == str.size()) { return ""; }

        std::size_t rightInd = str.size() - 1;
        while(str.at(rightInd) == char_to_trim) {
            --rightInd;
        }
        switch(side) {
            case Side::kLeft:
                return str.substr(leftInd, str.size() - leftInd);
            case Side::kRight:
                return str.substr(0, rightInd + 1);
            case Side::kBoth:
                return str.substr(leftInd, rightInd - leftInd + 1);
        }

        return "";
    }
    std::string Trim(const std::string& str) {
        std::size_t leftInd = 0;
        while(leftInd < str.size() && str.at(leftInd) == ' ') {
           ++leftInd;
        }
        if(leftInd == str.size()) { return ""; }

        std::size_t rightInd = str.size() - 1;
        while(str.at(rightInd) == ' ') {
            --rightInd;
        }

        return str.substr(leftInd, rightInd - leftInd + 1);

    }
}