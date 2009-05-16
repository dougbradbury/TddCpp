#include "Factorial.h"

Factorial::Factorial()
{
}

Factorial::~Factorial()
{
}

int Factorial::calculate(int n)
{
  if (n <= 1)
    return 1;
  return n * calculate(n-1);
}