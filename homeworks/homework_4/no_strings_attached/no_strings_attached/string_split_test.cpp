#include "string_split.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace std::string_literals;

TEST(String_split, TestEquality) {
    ASSERT_THAT(strman::Split("aaabaaba"s, "aa"s), ::testing::ElementsAre("", "ab", "ba"));
    ASSERT_THAT(strman::Split("aaabaaba"s, "aab"s), ::testing::ElementsAre("a", "", "a"));
    ASSERT_THAT(strman::Split("aaabaaba"s, "a"s), ::testing::ElementsAre("", "", "", "b", "", "b", ""));
    ASSERT_THAT(strman::Split("aaabaaba"s, "aba"s), ::testing::ElementsAre("aa", "", ""));
    ASSERT_THAT(strman::Split("hello world"s, " "s), ::testing::ElementsAre("hello", "world"));
}

TEST(String_split, TestNoDelimiter) {
    ASSERT_THAT(strman::Split("aaabaaba"s, ""s), ::testing::ElementsAre("aaabaaba"));
    ASSERT_THAT(strman::Split("hello world"s, ""s), ::testing::ElementsAre("hello world"));
}

TEST(String_split, TestDelimGreaterThanString) {
    ASSERT_THAT(strman::Split("aaabaaba"s, "aaabaabas"s), ::testing::ElementsAre("aaabaaba"));
    ASSERT_THAT(strman::Split("hello world"s, "hello worlds"s), ::testing::ElementsAre("hello world"));
}

TEST(String_split, TestDelimEqualString) {
    ASSERT_THAT(strman::Split("aaabaaba"s, "aaabaaba"s), ::testing::ElementsAre("", ""));
    ASSERT_THAT(strman::Split("hello world"s, "hello world"s), ::testing::ElementsAre("", ""));
}

TEST(String_split, TestDelimNotInString) {
    ASSERT_THAT(strman::Split("aaabaaba"s, "z"s), ::testing::ElementsAre("aaabaaba"));
    ASSERT_THAT(strman::Split("hello world"s, "z"s), ::testing::ElementsAre("hello world"));
}

TEST(String_split, TestStrippedEquality) {
    ASSERT_THAT(strman::Split("aaabaaba"s, "aa"s, 1), ::testing::ElementsAre(""));
}

TEST(String_split, TestStrippedMoreThanSplits) {
    ASSERT_THAT(strman::Split("aaabaaba"s, "aa"s, 4), ::testing::ElementsAre("", "ab", "ba"));
}