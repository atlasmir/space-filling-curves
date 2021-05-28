#ifndef SPACE_CURVE__FORMAT_H_
#define SPACE_CURVE__FORMAT_H_

#include <cstdint>

using Coord = uint64_t;
using Linear = uint64_t;

namespace space_curve {

struct Coordinate {
  Coord x;
  Coord y;
};

}  // namespace space_curve

#endif  // SPACE_CURVE__FORMAT_H_