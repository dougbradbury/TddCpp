#ifndef D_PrimeFactors_H
#define D_PrimeFactors_H

class PrimeFactors
  {
  public:
    explicit PrimeFactors();
    virtual ~PrimeFactors();
  private:

    PrimeFactors(const PrimeFactors&);
    PrimeFactors& operator=(const PrimeFactors&);

  };

#endif  // D_PrimeFactors_H
