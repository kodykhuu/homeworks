#include "drawer.hpp"

#include <gtest/gtest.h>
#include <ftxui/screen/color.hpp>

TEST(Drawer, TestEmptyDimensions) {
  const pixelator::Drawer image { ftxui::Dimension::Fixed(0) };
  EXPECT_EQ(image.rows(), 0);
  EXPECT_EQ(image.cols(), 0);
  EXPECT_EQ(image.size().rows, 0);
  EXPECT_EQ(image.size().cols, 0);
}

TEST(Drawer, TestFixedDimensions) {
  const pixelator::Drawer image { ftxui::Dimension::Fixed(2) };
  EXPECT_EQ(image.rows(), 2);
  EXPECT_EQ(image.cols(), 4);
  EXPECT_EQ(image.size().rows, 2);
  EXPECT_EQ(image.size().cols, 4);
}

TEST(Drawer, TestFullDimensions) {
  const pixelator::Drawer image { ftxui::Dimension::Full() };
  EXPECT_EQ(image.rows(), 80);
  EXPECT_EQ(image.cols(), 160);
  EXPECT_EQ(image.size().rows, 80);
  EXPECT_EQ(image.size().cols, 160);
}