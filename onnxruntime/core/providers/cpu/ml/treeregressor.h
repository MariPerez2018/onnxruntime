// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "tree_ensemble_common.h"

namespace onnxruntime {
namespace ml {
template <typename T>
class TreeEnsembleRegressor final : public OpKernel {
 public:
  explicit TreeEnsembleRegressor(const OpKernelInfo& info);
  common::Status Compute(OpKernelContext* context) const override;

 private:
  detail::TreeEnsembleCommon<T, float> tree_ensemble_;
};
}  // namespace ml
}  // namespace onnxruntime
