#ifndef DRAWER_HPP
#define DRAWER_HPP

#include "stb_image_data_view.hpp"
#include "image.hpp"

#include <ftxui/screen/screen.hpp>
#include <utility>
#include <string>

namespace pixelator {

class Drawer {
public:
  explicit Drawer(ftxui::Dimensions dimension)
    : m_dimensions { dimension }
  {}

  [[nodiscard]] int rows() const {
    return m_dimensions.dimx;
  };

  [[nodiscard]] int cols() const {
    return rows() * 2;
  }

  [[nodiscard]] Size size() const {
    return { rows(), cols() };
  }

  void Set(Image image) {
    m_image = image;
  }

  void Draw();

  std::string ToString();

private:
  ftxui::Dimensions m_dimensions {};
  Image m_image {};
};

}

#endif