/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "ABI43_0_0AndroidSwitchShadowNode.h"

namespace ABI43_0_0facebook {
namespace ABI43_0_0React {

extern const char AndroidSwitchComponentName[] = "AndroidSwitch";

void AndroidSwitchShadowNode::setAndroidSwitchMeasurementsManager(
    const std::shared_ptr<AndroidSwitchMeasurementsManager>
        &measurementsManager) {
  ensureUnsealed();
  measurementsManager_ = measurementsManager;
}

#pragma mark - LayoutableShadowNode

Size AndroidSwitchShadowNode::measureContent(
    LayoutContext const &layoutContext,
    LayoutConstraints const &layoutConstraints) const {
  return measurementsManager_->measure(getSurfaceId(), layoutConstraints);
}

} // namespace ABI43_0_0React
} // namespace ABI43_0_0facebook
