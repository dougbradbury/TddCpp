#include "PrimeFactors.h"

PrimeFactors::PrimeFactors()
{
}

PrimeFactors::~PrimeFactors()
{
}


std::vector<int> PrimeFactors::calculate(int n)
{
  std::vector<int> factors;
  int candidate = 2;
  while(candidate <= n)
  {
    while (n % candidate == 0)
    {
      factors.push_back(candidate);
      n /= candidate;
    }
    candidate++;
  }  
  return factors;
}
