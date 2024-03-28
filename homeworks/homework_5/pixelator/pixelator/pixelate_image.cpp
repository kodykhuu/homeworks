#include "pixelate_image.hpp"

namespace pixelator {

Image PixelateImage(const StbImageDataView& image, Size size) {
  const auto factor_cols = size.col / static_cast<float>(image.cols());
  const auto factor_rows = size.row / static_cast<float>(image.rows());
  const auto smallest_factor = std::min(factor_cols, factor_rows);

  Image pixelated_image { image.rows(), image.cols() };
  for(int i { 0 }; i < image.rows(); ++i) {
    for(int j { 0 }; j < image.cols(); ++j) {
      pixelated_image.at(i, j) = image.at(i, j);
    }
  }

  return pixelated_image;
}

int Scale(int number, float factor) {
  return static_cast<int>(number * factor);
}

}

