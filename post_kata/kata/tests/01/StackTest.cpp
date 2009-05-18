#include "CppUTest/TestHarness.h"
#include "Stack.h"

TEST_GROUP(Stack)
{
  Stack* stack;

  void setup()
  {
    stack = new Stack();
  }
  void teardown()
  {
    delete stack;
  }
};

TEST(Stack, shouldStartEmpty)
{
  CHECK(stack->isEmpty());
}

TEST(Stack, shouldNotBeEmptyAfterPuttingOne)
{
  stack->push(1);
  CHECK(!stack->isEmpty());
}

TEST(Stack, shouldBeEmptyAfterPushingAndPopingOne)
{
  stack->push(1);
  stack->pop();
  CHECK(stack->isEmpty());
}

TEST(Stack, shouldPushMultiple)
{
  stack->push(1);
  stack->push(1);
  stack->pop();
  CHECK(!stack->isEmpty());
}

TEST(Stack, shouldReturnPopedValue)
{
  stack->push(321);
  LONGS_EQUAL(321, stack->pop())
}

TEST(Stack, shouldReturnAnotherPoppedValue)
{
  stack->push(442);
  LONGS_EQUAL(442, stack->pop())  
}

TEST(Stack, shouldReturnMultiplePoppedValuesFIFO)
{
  stack->push(4);
  stack->push(3);
  stack->push(2);
  LONGS_EQUAL(2, stack->pop());
  LONGS_EQUAL(3, stack->pop());
  LONGS_EQUAL(4, stack->pop());
}

TEST(Stack, shouldPopEmptyStack)
{
  LONGS_EQUAL(0xFFFFFFFF, stack->pop());
  CHECK(stack->isEmpty());
}


TEST_GROUP(StackWithCapacity)
{
  Stack* stack;

  void setup()
  {
    stack = new Stack(5);
  }
  void teardown()
  {
    delete stack;
  }
  
  void fillStack()
  {
    stack->push(1);
    stack->push(2);
    stack->push(3);
    stack->push(4);
    stack->push(5);
  }
};

TEST(StackWithCapacity, shouldNotBeFull)
{
  CHECK(!stack->isFull());
}

TEST(StackWithCapacity, shouldBeFull)
{
  fillStack();
  CHECK(stack->isFull())  
}

TEST(StackWithCapacity, shouldHandleFullCapacity)
{
  fillStack();
  stack->push(6);
  
  LONGS_EQUAL(5, stack->pop());
}

