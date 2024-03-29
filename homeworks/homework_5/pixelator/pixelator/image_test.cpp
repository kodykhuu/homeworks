#include "image.hpp"

#include <gtest/gtest.h>

TEST(Image, TestEmptyImage) {
  pixelator::Image image {};
  EXPECT_TRUE(image.empty());
  EXPECT_EQ(image.rows(), 0);
  EXPECT_EQ(image.cols(), 0);
  EXPECT_EQ(image.size().rows, 0);
  EXPECT_EQ(image.size().cols, 0);
  EXPECT_THROW(image.at(0,0), std::out_of_range);
}

TEST(Image, TestImageZeroRows) {
  pixelator::Image image { 0, 1 };
  EXPECT_TRUE(image.empty());
  EXPECT_EQ(image.rows(), 0);
  EXPECT_EQ(image.cols(), 1);
  EXPECT_EQ(image.size().rows, 0);
  EXPECT_EQ(image.size().cols, 1);
  EXPECT_THROW(image.at(0,0), std::out_of_range);
}

TEST(Image, TestImageZeroCols) {
  pixelator::Image image { 1, 0 };
  EXPECT_TRUE(image.empty());
  EXPECT_EQ(image.rows(), 1);
  EXPECT_EQ(image.cols(), 0);
  EXPECT_EQ(image.size().rows, 1);
  EXPECT_EQ(image.size().cols, 0);
  EXPECT_THROW(image.at(0,0), std::out_of_range);
}

TEST(Image, TestImageNonEmpty) {
  pixelator::Image image { 3, 4 };
  EXPECT_FALSE(image.empty());
  EXPECT_EQ(image.rows(), 3);
  EXPECT_EQ(image.cols(), 4);
  EXPECT_EQ(image.size().rows, 3);
  EXPECT_EQ(image.size().cols, 4);
  EXPECT_THROW(image.at(5, 5), std::out_of_range);
  EXPECT_NO_THROW(image.at(2, 3));
}

