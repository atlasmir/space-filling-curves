#ifndef SPACE_CURVE__CURVE_H_
#define SPACE_CURVE__CURVE_H_

#include <cstdint>

#include "format.h"

namespace space_curve {

class SpaceCurve {
 public:
  virtual bool Map(Linear t, Coordinate* coord) = 0;
  virtual bool MapInverse(const Coordinate& coord, Linear* t) = 0;

 private:
};

class Hilbert : public SpaceCurve {
 public:
  // REQUIRES: n is positive and power of two
  // TODO: verify n.
  Hilbert(uint64_t n) { n_ = n; }

  bool Map(Linear t, Coordinate* coord) override;
  bool MapInverse(const Coordinate& coord, Linear* t) override;

 private:
  uint64_t n_;
};

}  // namespace space_curve

#endif  // SPACE_CURVE__CURVE_H_