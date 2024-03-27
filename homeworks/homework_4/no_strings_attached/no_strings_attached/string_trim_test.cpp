#include <gtest/gtest.h>
#include "string_trim.h"

using namespace std::string_literals;

TEST(String_trim, TestEquality) {
    EXPECT_EQ(no_strings_attached::Trim("  a"s, ' ', no_strings_attached::Side::kLeft), "a");
    EXPECT_EQ(no_strings_attached::Trim("a  "s, ' ', no_strings_attached::Side::kRight), "a");
    EXPECT_EQ(no_strings_attached::Trim("  a  "s, ' ', no_strings_attached::Side::kBoth), "a");
}

TEST(String_trim, TestAllTrimChars) {
    EXPECT_EQ(no_strings_attached::Trim("  "s, ' ', no_strings_attached::Side::kLeft), "");
    EXPECT_EQ(no_strings_attached::Trim("  "s, ' ', no_strings_attached::Side::kRight), "");
    EXPECT_EQ(no_strings_attached::Trim("    "s, ' ', no_strings_attached::Side::kBoth), "");
}

TEST(String_trim, TestOverloadedEquality) {
    EXPECT_EQ(no_strings_attached::Trim("  a"s), "a");
    EXPECT_EQ(no_strings_attached::Trim("a  "s), "a");
    EXPECT_EQ(no_strings_attached::Trim("  a  "s), "a");
}

TEST(String_trim, TestOverloadedAllTrimChars) {
    EXPECT_EQ(no_strings_attached::Trim("  "s), "");
}