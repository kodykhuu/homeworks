#ifndef STRING_TRIM_H
#define STRING_TRIM_H

#include <string>
namespace strman {

    enum class Side {
        kLeft,
        kRight,
        kBoth
    };

    std::string Trim(const std::string& str, char char_to_trim, Side side);
}

#endif