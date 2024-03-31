#ifndef IMAGE_HPP
#define IMAGE_HPP

#include <ftxui/screen/color.hpp>
#include "stb_image_data_view.hpp"

#include <vector>

namespace pixelator {

class Image {
public:
  Image() = default;
  Image(int rows, int cols)
    : m_rows { rows }, m_cols { cols }, m_pixelColors( m_rows * m_cols )
  {}

  Image(pixelator::Size size)
    : m_rows { size.rows }, m_cols { size.cols }, m_pixelColors( m_rows * m_cols )
  {}

  [[nodiscard]] int rows() const {
    return m_rows;
  }

  [[nodiscard]] int cols() const {
    return m_cols;
  }

  [[nodiscard]] bool empty() const {
    return m_rows == 0 || m_cols == 0;
  }

  [[nodiscard]] Size size() const {
    return { m_rows, m_cols };
  }

  ftxui::Color& at(int row, int col) {
    const auto index { static_cast<size_t>((row * cols()) + col) };
    if(index >= m_pixelColors.size()) {
      throw std::out_of_range("Out of range");
    }
    return m_pixelColors[index];
  }

  ftxui::Color at(int row, int col) const {
    const auto index { static_cast<size_t>((row * cols()) + col) };
    if(index >= m_pixelColors.size()) {
      throw std::out_of_range("Out of range");
    }
    return m_pixelColors[index];
  }


private:
  int m_rows {};
  int m_cols {};
  std::vector<ftxui::Color> m_pixelColors {};

};

}

#endif