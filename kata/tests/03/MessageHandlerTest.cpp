#include "CppUTest/TestHarness.h"
#include "MessageHandler.h"

TEST_GROUP(MessageHandler)
{
  MessageHandler* messageHandler;
  void setup()
  {
    messageHandler = new MessageHandler();
  }
  void teardown()
  {
    delete messageHandler;
  }
};

TEST(MessageHandler, firstTest)
{
}