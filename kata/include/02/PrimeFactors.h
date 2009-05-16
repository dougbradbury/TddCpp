#ifndef D_PrimeFactors_H
#define D_PrimeFactors_H

///////////////////////////////////////////////////////////////////////////////
//
//  PrimeFactors is responsible for ...
//
///////////////////////////////////////////////////////////////////////////////
#include <vector>

class PrimeFactors
  {
  public:
    explicit PrimeFactors();
    virtual ~PrimeFactors();
    std::vector<int> calculate(int);
  private:

    PrimeFactors(const PrimeFactors&);
    PrimeFactors& operator=(const PrimeFactors&);

  };

#endif  // D_PrimeFactors_H
