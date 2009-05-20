#include "CppUTest/TestHarness.h"
#include "MessageHandler.h"
#include "ComLink.h"
#include "database.h"

class MockComLink : public ComLink
{
  public:
    MockComLink() : lastSentMessage(""){};
    virtual ~MockComLink(){};
    virtual void send(char * message)
    {
      lastSentMessage = message;
    }
    char * lastSentMessage;
};

class MockDatabase : public Database
{
public:
  MockDatabase(){};
  virtual ~MockDatabase(){};
  
  virtual float getCurrentBalance(){
    return currentBalance;
  }
  float currentBalance;
};

TEST_GROUP(MessageHandler)
{
  MessageHandler* messageHandler;
  MockComLink * mockComLink;
  MockDatabase * mockDatabase;
  void setup()
  {
    mockComLink = new MockComLink();
    mockDatabase = new MockDatabase();
    messageHandler = new MessageHandler(mockComLink, mockDatabase);
  }
  void teardown()
  {
    delete messageHandler;
    delete mockComLink;
    delete mockDatabase;
  }
};

TEST(MessageHandler, shouldHandleEchoMessage)
{
  messageHandler->receive("echo hello");
  STRCMP_EQUAL("hello", mockComLink->lastSentMessage)
}

TEST(MessageHandler, shouldHandleAnotherEchoMessage)
{
  messageHandler->receive("echo how are you?");
  STRCMP_EQUAL("how are you?", mockComLink->lastSentMessage)  ;
}

TEST(MessageHandler, shouldGetStoredValue)
{
  mockDatabase->currentBalance = 12.53f;
  messageHandler-> receive("get currentBalance");
  STRCMP_EQUAL("$12.53", mockComLink->lastSentMessage);
}