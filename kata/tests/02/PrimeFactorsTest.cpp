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
  void checkFactors(vector<int> expected, vector<int> actual)
  {
    LONGS_EQUAL(expected.size(), actual.size())
    for(unsigned int i = 0; i < expected.size(); i++)
    {
      LONGS_EQUAL(expected[i], actual[i]);
    }
  }
};

TEST(PrimeFactors, ShouldFactor1)
{
  checkFactors(vector<int>(), primeFactors->calculate(1));
}

TEST(PrimeFactors, shouldFactor2)
{
  checkFactors(vector<int>(1, 2), primeFactors->calculate(2));
}

TEST(PrimeFactors, shouldFactor3)
{
  checkFactors(vector<int>(1, 3), primeFactors->calculate(3));
}

TEST(PrimeFactors, shouldFactor4)
{
  checkFactors(vector<int>(2, 2), primeFactors->calculate(4));
}

TEST(PrimeFactors, shouldFactor5)
{
  checkFactors(vector<int>(1, 5), primeFactors->calculate(5));
}

TEST(PrimeFactors, shouldFactor6)
{
  vector<int> expected;
  expected.push_back(2);
  expected.push_back(3);
  checkFactors(expected, primeFactors->calculate(6));
}

TEST(PrimeFactors, shouldFactor7)
{
  checkFactors(vector<int>(1, 7), primeFactors->calculate(7));
}

TEST(PrimeFactors, shouldFactor8)
{
  checkFactors(vector<int>(3, 2), primeFactors->calculate(8));
}

TEST(PrimeFactors, shouldFactor9)
{
  checkFactors(vector<int>(2, 3), primeFactors->calculate(9));
}

TEST(PrimeFactors, shouldFactoraBigOne)
{
  vector<int> expected;
  expected.push_back(2);
  expected.push_back(3);
  expected.push_back(5);
  expected.push_back(7);
  expected.push_back(13);
  checkFactors(expected, primeFactors->calculate(2*3*5*7*13));  
}