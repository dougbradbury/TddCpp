#ifndef D_Stack_H
#define D_Stack_H

class Stack
  {
  public:
    explicit Stack();
    virtual ~Stack();

  private:

    Stack(const Stack&);
    Stack& operator=(const Stack&);

  };

#endif  // D_Stack_H
