#ifndef D_Factorial_H
#define D_Factorial_H

class Factorial
  {
  public:
    explicit Factorial();
    virtual ~Factorial();
    
  private:

    Factorial(const Factorial&);
    Factorial& operator=(const Factorial&);

  };

#endif  // D_Factorial_H
