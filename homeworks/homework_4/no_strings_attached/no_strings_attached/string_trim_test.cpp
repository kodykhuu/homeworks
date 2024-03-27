#include <gtest/gtest.h>
#include "string_trim.h"

using namespace std::string_literals;

TEST(String_trim, TestEquality) {
    EXPECT_EQ(strman::Trim("  a"s, ' ', strman::Side::kLeft), "a");
    EXPECT_EQ(strman::Trim("a  "s, ' ', strman::Side::kRight), "a");
    EXPECT_EQ(strman::Trim("  a  "s, ' ', strman::Side::kBoth), "a");
}

TEST(String_trim, TestAllTrimChars) {
    EXPECT_EQ(strman::Trim("  "s, ' ', strman::Side::kLeft), "");
    EXPECT_EQ(strman::Trim("  "s, ' ', strman::Side::kRight), "");
    EXPECT_EQ(strman::Trim("    "s, ' ', strman::Side::kBoth), "");
}

TEST(String_trim, TestOverloadedEquality) {
    EXPECT_EQ(strman::Trim("  a"s), "a");
    EXPECT_EQ(strman::Trim("a  "s), "a");
    EXPECT_EQ(strman::Trim("  a  "s), "a");
}

TEST(String_trim, TestOverloadedAllTrimChars) {
    EXPECT_EQ(strman::Trim("  "s), "");
}