#include <gtest/gtest.h>
#include "string_trim.h"

using namespace std::string_literals;

TEST(String_trim, TestEquality) {
    EXPECT_EQ(strman::Trim("a  "s, ' ', strman::Side::kLeft), "test");
}
