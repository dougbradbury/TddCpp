#ifndef D_Stack_H
#define D_Stack_H

class Stack
  {
  public:
    explicit Stack(int capacity=32);
    virtual ~Stack();
    bool isEmpty() const;
    bool isFull() const;
    void push(int n);
    int pop();
    
  private:
    
    int capacity;
    int count;
    int * data;
    Stack(const Stack&);
    Stack& operator=(const Stack&);

  };

#endif  // D_Stack_H
