#ifndef STRING_SPLIT_H
#define STRING_SPLIT_H

#include <vector>
#include <string>

namespace strman {
    std::vector<std::string> Split(const std::string& str, const std::string& delimiter);
    std::vector<std::string> Split(const std::string& str, const std::string& delimiter, int number_of_chunks_to_keep);
}

#endif