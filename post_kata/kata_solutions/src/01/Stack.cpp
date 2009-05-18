#include "Stack.h"
Stack::Stack(int _capacity) : 
capacity(_capacity),
count(0)
{
  data = new int[capacity];
}

Stack::~Stack()
{
  delete[] data;
}

bool Stack::isEmpty() const
{
  return count == 0;
}

void Stack::push(int n)
{
  if (count < capacity)
  {
    data[count++] = n;
  }
}

int Stack::pop()
{
  if (count == 0)
    return 0xFFFFFFFF;
  count--;
  return data[count];
}

bool Stack::isFull() const
{
  return count == capacity;
}