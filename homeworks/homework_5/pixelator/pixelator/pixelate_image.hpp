#ifndef PIXELATE_IMAGE_HPP
#define PIXELATE_IMAGE_HPP

#include "stb_image_data_view.hpp"
#include "image.hpp"

namespace pixelator {

Image PixelateImage(const StbImageDataView& image, Size size);
int Scale(int number, float factor);

}

#endif