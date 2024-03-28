#include "drawer.hpp"

#include <ftxui/screen/screen.hpp>

namespace pixelator {

void Drawer::Draw() {
  ftxui::Screen screen { ftxui::Screen::Create(m_dimensions) };
  for(int i {0}; i < rows(); ++i) {
    screen.PixelAt(i, i).background_color = m_image.at(0, 0);
    screen.PixelAt(i, i).character = ' ';
    screen.PixelAt(i+1, i).background_color = m_image.at(0, 0);
    screen.PixelAt(i+1, i).character = ' ';
  }

}

std::string Drawer::ToString() {
  return {};
}

}