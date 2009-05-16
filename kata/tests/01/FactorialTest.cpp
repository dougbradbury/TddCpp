#include "CppUTest/TestHarness.h"
#include "Factorial.h"

TEST_GROUP(Factorial)
{
  Factorial* factorial;

  void setup()
  {
    factorial = new Factorial();
  }
  void teardown()
  {
    delete factorial;
  }
};

TEST(Factorial, ShouldFactor1)
{
  LONGS_EQUAL(1, factorial->calculate(1));
}

TEST(Factorial, ShouldFactor2)
{
  LONGS_EQUAL(2, factorial->calculate(2));
}

TEST(Factorial, ShouldFactor3)
{
  LONGS_EQUAL(6, factorial->calculate(3))
}

TEST(Factorial, ShouldFactor4)
{
  LONGS_EQUAL(24, factorial->calculate(4))
}

TEST(Factorial, ShouldFactor0)
{
  LONGS_EQUAL(1, factorial->calculate(0))
}
