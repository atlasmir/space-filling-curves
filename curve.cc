#include "curve.h"

#include <cassert>

namespace space_curve {

bool Hilbert::Map(Linear t, Coordinate *coord) {
  assert(0 <= t && t < n_ * n_);
  return false;
}

bool Hilbert::MapInverse(const Coordinate &coord, uint64_t *t) { return false; }

}  // namespace space_curve