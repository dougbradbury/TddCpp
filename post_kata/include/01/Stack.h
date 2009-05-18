#ifndef D_Stack_H
#define D_Stack_H

///////////////////////////////////////////////////////////////////////////////
//
//  Stack is responsible for ...
//
///////////////////////////////////////////////////////////////////////////////

class Stack
  {
  public:
    explicit Stack();
    virtual ~Stack();
    bool isEmpty() const;
    void push(int);
    int pop();

  private:

    int count;
    int* data;
    Stack(const Stack&);
    Stack& operator=(const Stack&);

  };

#endif  // D_Stack_H
