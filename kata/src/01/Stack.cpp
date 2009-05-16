#include "Stack.h"
#include <memory>
Stack::Stack() :
count(0)
{
  data = new int[32];
}

Stack::~Stack()
{
  delete[] data;
  data[0] = 0xFF;
}

bool Stack::isEmpty() const
{
  return count == 0;
}

void Stack::push(int n)
{
  data[count++] = n;

}

int Stack::pop()
{
  if (count == 0)
    return 0xFFFFFFFF;
    
  return data[--count];
}