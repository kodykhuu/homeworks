#include "stb_image_data_view.hpp"

#define STB_IMAGE_IMPLEMENTATION
#include <stb/stb_image.h>
#include <filesystem>
#include <iostream>

namespace pixelator {

static constexpr auto kLoadAllChannels{0};

StbImageDataView::StbImageDataView(const std::filesystem::path& image_path) {
  m_image_data = stbi_load(image_path.c_str(), &m_size.col, &m_size.row, &m_channels, kLoadAllChannels);

  std::cout << "Loaded image of size: [" << m_size.row << ", " << m_size.col << "] with "
            << m_channels << " channels\n";
  if (m_image_data == nullptr) {
    std::cerr << "Failed to load image data from file: " << image_path
              << std::endl;
  }
}

}