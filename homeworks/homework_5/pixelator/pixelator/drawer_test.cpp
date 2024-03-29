#include "drawer.hpp"

#include <gtest/gtest.h>
#include <ftxui/screen/color.hpp>

TEST(Drawer, TestEmptyDimensions) {
  const pixelator::Drawer image { ftxui::Dimension::Fixed(0) };
  EXPECT_EQ(image.rows(), 0);
  EXPECT_EQ(image.cols(), 0);
  EXPECT_EQ(image.size().row, 0);
  EXPECT_EQ(image.size().col, 0);
}

TEST(Drawer, TestFixedDimensions) {
  const pixelator::Drawer image { ftxui::Dimension::Fixed(2) };
  EXPECT_EQ(image.rows(), 2);
  EXPECT_EQ(image.cols(), 4);
  EXPECT_EQ(image.size().row, 2);
  EXPECT_EQ(image.size().col, 4);
}

TEST(Drawer, TestFullDimensions) {
  const pixelator::Drawer image { ftxui::Dimension::Full() };
  EXPECT_EQ(image.rows(), 80);
  EXPECT_EQ(image.cols(), 160);
  EXPECT_EQ(image.size().row, 80);
  EXPECT_EQ(image.size().col, 160);
}