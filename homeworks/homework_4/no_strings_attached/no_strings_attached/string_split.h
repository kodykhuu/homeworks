#ifndef STRING_SPLIT_H
#define STRING_SPLIT_H

#include <vector>
#include <string>

namespace strman {
    std::vector<std::string> Split(const std::string& str, const std::string& delimiter);
}

#endif