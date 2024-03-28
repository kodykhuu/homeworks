#ifndef STB_IMAGE_DATA_VIEW_HPP
#define STB_IMAGE_DATA_VIEW_HPP

#include "stb/stb_image.h"

#include <filesystem>

namespace pixelator {

struct Size {
  int row{};
  int col{};
};

class StbImageDataView {
public:
  StbImageDataView() = default;
  explicit StbImageDataView(const std::filesystem::path& image_path);
  ~StbImageDataView() {
    stbi_image_free(m_image_data);
  }

  [[nodiscard]] pixelator::Size size() const {
    return m_size;
  }

  [[nodiscard]] int rows() const {
    return m_size.row;
  }

  [[nodiscard]] int cols() const {
    return m_size.col;
  }

  [[nodiscard]] bool empty() const {
    return m_size.row == 0 && m_size.col == 0;
  }

  //TODO ftxui::Color at(int row, int col) {}

  StbImageDataView(StbImageDataView&& stbImageDataView) noexcept
    : m_image_data { stbImageDataView.m_image_data }
  {
        stbImageDataView.m_image_data = nullptr;
  }

  StbImageDataView& operator=(StbImageDataView&& stbImageDataView) noexcept {
        if(&stbImageDataView == this) {
          return *this;
        }

        stbi_image_free(m_image_data);

        m_image_data = stbImageDataView.m_image_data;
        stbImageDataView.m_image_data = nullptr;

        return *this;
  }

  StbImageDataView(const StbImageDataView& stbImageDataView) = delete;
  StbImageDataView& operator=(const StbImageDataView& stbImageDataView) = delete;

private:
  stbi_uc* m_image_data {};
  pixelator::Size m_size {};

};

}

#endif