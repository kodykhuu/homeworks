#include "pixelate_image.hpp"

namespace pixelator {

Image PixelateImage(const StbImageDataView& image, Size size) {
  const auto factor_cols = image.cols() / size.cols;
  const auto factor_rows = image.rows() / size.rows;
//  const auto smallest_factor = std::min(factor_cols, factor_rows);

//  const int scaled_rows { Scale(image.rows(), smallest_factor) };
//  const int scaled_cols { Scale(image.cols(), smallest_factor) };
//
//  if(image.rows() < size.rows && image.cols() < size.cols) {
//    size.rows = image.rows();
//    size.cols = image.cols();
//  }

  Image pixelated_image { size.rows, size.cols };

//  for(int i { 0 }; i < pixelated_image.rows(); ++i) {
//    for(int j { 0 }; j < pixelated_image.cols(); ++j) {
////      pixelated_image.at(i, j+1) = image.at(i, j);
////      pixelated_image.at(i, j+2) = image.at(i, j);
////
//
//      pixelated_image.at(i, j) = image.at(i, j);
//    }
//  }

  return pixelated_image;
}

int Scale(int number, float factor) {
  return static_cast<int>(number * factor);
}

}

