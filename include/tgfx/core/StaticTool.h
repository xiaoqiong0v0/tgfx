//
// Created by king- on 24-7-25.
//

#pragma once

#include "tgfx/core/Canvas.h"

namespace tgfx {
class StaticTool {
public:
  static std::shared_ptr<Image> drawToGenerateImage(Context *context, int width, int height,
                                                    const std::function<void(Canvas *canvas)> &function);
};
} // namespace tgfx
