//
// Created by king- on 24-7-25.
//
#include "tgfx/core/StaticTool.h"
#include <tgfx/gpu/Surface.h>
#include "gpu/Texture.h"

namespace tgfx {
std::shared_ptr<Image> StaticTool::drawToGenerateImage(Context *context, const int width, const int height,
                                                       const std::function<void(Canvas *canvas)> &function) {
  auto surface = Surface::Make(context, width, height);
  if (surface == nullptr) {
    return nullptr;
  }
  const auto canvas = surface->getCanvas();
  function(canvas);
  auto image = surface->makeImageSnapshot();
  surface->flushAndSubmit();
  return image;
}
}
