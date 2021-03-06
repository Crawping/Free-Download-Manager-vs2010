/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef MOZILLA_SVGCONTEXT_H_
#define MOZILLA_SVGCONTEXT_H_

#include "SVGPreserveAspectRatio.h"

namespace mozilla {

// SVG image-specific rendering context. For imgIContainer::Draw.
// Used to pass information about overridden attributes from an SVG <image>
// element to the image's internal SVG document when it's drawn.
class NS_STACK_CLASS SVGImageContext
{
public:
  SVGImageContext(SVGPreserveAspectRatio aPreserveAspectRatio)
    : mPreserveAspectRatio(aPreserveAspectRatio)
  { }

  const SVGPreserveAspectRatio& GetPreserveAspectRatio() const {
    return mPreserveAspectRatio;
  }

private:
  const SVGPreserveAspectRatio mPreserveAspectRatio;
};

} // namespace mozilla

#endif // MOZILLA_SVGCONTEXT_H_
