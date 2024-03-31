#include "drawer.hpp"

#include <ftxui/screen/screen.hpp>

namespace pixelator {

void Drawer::Draw() {

  ftxui::Screen screen { ftxui::Screen::Create(m_dimensions) };
  const ftxui::Color kYellowishColor = ftxui::Color::RGB(255, 200, 100);
  for(int i {0}; i < cols(); ++i) {
    for(int j {0}; j < rows(); ++j) {
      screen.PixelAt(i, j).background_color = m_image.at(j, i);
      screen.PixelAt(i, j).character = ' ';
//      screen.PixelAt(i+1, j).background_color = kYellowishColor;
//      screen.PixelAt(i+1, j).character = ' ';
    }

  }

  screen.Print();

}

std::string Drawer::ToString() {
  return "\\x1B[39m\\x1B[40m \\x1B[39m\\x1B[49m";
}

}