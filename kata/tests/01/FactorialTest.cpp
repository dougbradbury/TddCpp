#include "CppUTest/TestHarness.h"
#include "Factorial.h"

TEST_GROUP(Factorial)
{
  Factorial* factorial;

  void setup()
  {
    factorial = new Factorial();
  }
  void teardown()
  {
    delete factorial;
  }
};

TEST(Factorial, Create)
{
  FAIL("Start here");
}

