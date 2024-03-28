#include "pixelate_image.hpp"

namespace pixelator {

Image PixelateImage(StbImageDataView image, Size size) {
  Image pixelated_image { image.rows(), image.cols() };

  return pixelated_image;
}


}

