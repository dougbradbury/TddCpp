#include "CppUTest/TestHarness.h"
#include "PrimeFactors.h"

TEST_GROUP(PrimeFactors)
{
  PrimeFactors* primeFactors;

  void setup()
  {
    primeFactors = new PrimeFactors();
  }
  void teardown()
  {
    delete primeFactors;
  }
};

TEST(PrimeFactors, Create)
{
  FAIL("Start here");
}

