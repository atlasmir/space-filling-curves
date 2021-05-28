#include "curve.h"

#include "gtest/gtest.h"

namespace space_curve {

TEST(SpaceCurveTest, Temp) {
  // TODO: Remove this temporary test
  Hilbert hilbert(16);
  Coordinate coord;
  ASSERT_FALSE(hilbert.Map(64, &coord));
}

}  // namespace space_curve

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}