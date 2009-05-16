#include "CppUTest/TestHarness.h"
#include "MessageHandler.h"
#include "ComLink.h"

class MockComLink: public ComLink
{
public:
  MockComLink() : lastSentMessage(0)
  {
  }
  
  char * lastSentMessage;
  virtual void send(char * message)
  {
    
  }
  
};

TEST_GROUP(MessageHandler)
{
  MessageHandler* messageHandler;
  MockComLink* mockComLink;
  void setup()
  {
    mockComLink = new MockComLink();
    messageHandler = new MessageHandler(mockComLink);
  }
  void teardown()
  {
    delete messageHandler;
    delete mockComLink;
  }
};

TEST(MessageHandler, shouldHandleEchoMessage)
{
  messageHandler->receive("echo|hello");
  STRCMP_EQUAL("hello", mockComLink->lastSentMessage);
}

