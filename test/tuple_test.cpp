#include "tuple.hpp"
#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(TupleTest, BasicConstruction) {
  auto a = Tuple(4.3, -4.2, 3.1, 1.0);
  EXPECT_EQ(a.x, 4.3);
  EXPECT_EQ(a.y, -4.2);
  EXPECT_EQ(a.z, 3.1);
  EXPECT_EQ(a.w, 1.0);
  EXPECT_TRUE(a.isPoint());
  EXPECT_FALSE(a.isVector());

  a = Tuple(4.3, -4.2, 3.1, 0.0);
  EXPECT_EQ(a.x, 4.3);
  EXPECT_EQ(a.y, -4.2);
  EXPECT_EQ(a.z, 3.1);
  EXPECT_EQ(a.w, 0.0);
  EXPECT_FALSE(a.isPoint());
  EXPECT_TRUE(a.isVector());
}
