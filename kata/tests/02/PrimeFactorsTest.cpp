#include "CppUTest/TestHarness.h"
#include "PrimeFactors.h"
#include <vector>

using namespace std;

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

TEST(PrimeFactors, fisrtTest)
{

}