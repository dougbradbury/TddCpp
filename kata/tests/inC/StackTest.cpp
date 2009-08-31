extern "C"
{
#include "Stack.h"
}

//CppUTest includes should be after your and system includes
#include "CppUTest/TestHarness.h"

TEST_GROUP(Stack)
{
    Stack* stack;

    void setup()
    {
      stack = Stack_Create();
    }

    void teardown()
    {
       Stack_Destroy(stack);
    }
};

TEST(Stack, Create)
{
  FAIL("Start here");
}


// TEST(Stack, shouldStartEmpty)
// {
//   CHECK(Stack_isEmpty(stack));
// }
// 
// TEST(Stack, shouldNotBeEmptyAfterPuttingOne)
// {
// 	Stack_push(stack, 1);
// 	CHECK(!Stack_isEmpty(stack));
// }
// 
// TEST(Stack, shouldBeEmptyAfterPushingAndPopingOne)
// {
// 	Stack_push(stack, 1);
// 	Stack_pop(stack);
// 	CHECK(Stack_isEmpty(stack));
// }
// 
// TEST(Stack, shouldPushMultiple)
// {
// 	Stack_push(stack, 1);
// 	Stack_push(stack, 1);
// 	Stack_pop(stack);
// 	CHECK(!Stack_isEmpty(stack));
// }
// 
// TEST(Stack, shouldReturnPopedValue)
// {
// 	Stack_push(stack, 321);	
// 	LONGS_EQUAL(321, Stack_pop(stack))
// }
// 
// TEST(Stack, shouldReturnAnotherPoppedValue)
// {
// 	Stack_push(stack, 422);	
// 	LONGS_EQUAL(422, Stack_pop(stack))
// }
// 
// TEST(Stack, shouldReturnMultiplePoppedValuesFIFO)
// {
// 	Stack_push(stack, 4);	
// 	Stack_push(stack, 3);	
// 	Stack_push(stack, 2);	
// 	
// 	LONGS_EQUAL(2, Stack_pop(stack));
// 	LONGS_EQUAL(3, Stack_pop(stack));
// 	LONGS_EQUAL(4, Stack_pop(stack));
// }
// 
// TEST(Stack, shouldPopEmptyStack)
// {
// 	LONGS_EQUAL(0xFFFFFFFF, Stack_pop(stack));
// 	CHECK(Stack_isEmpty(stack));
// }
