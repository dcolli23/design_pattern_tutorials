#include "gtest/gtest.h"

#include "Adapter.h"

TEST(AdapterTest, FullTest) {
  RoundHole *r_hole = new RoundHole(5.0);
  RoundPeg *r_peg = new RoundPeg(4.9);

  EXPECT_TRUE(r_hole->fits(r_peg));

  SquarePeg *s_peg_small = new SquarePeg(3.0);
  SquarePeg *s_peg_large = new SquarePeg(10.0);

  // This won't compile since s_peg_* isn't a compatible type with RoundHole::fits
  // r_hole->fits(s_peg_small)

  // Instead, we use the adapter class.
  SquarePegAdapter *s_peg_adapter_small = new SquarePegAdapter(s_peg_small);
  SquarePegAdapter *s_peg_adapter_large = new SquarePegAdapter(s_peg_large);

  EXPECT_TRUE(r_hole->fits(s_peg_adapter_small));
  EXPECT_FALSE(r_hole->fits(s_peg_adapter_large)) << "Failed with square peg radius of: " << s_peg_adapter_large->getRadius() << " and hole radius of: " << r_hole->getRadius();
}