#ifndef PIXELATE_IMAGE_HPP
#define PIXELATE_IMAGE_HPP

#include "stb_image_data_view.hpp"
#include "image.hpp"

namespace pixelator {

Image PixelateImage(StbImageDataView image, Size size);

}

#endif