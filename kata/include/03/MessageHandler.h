#ifndef D_MessageHandler_H
#define D_MessageHandler_H

///////////////////////////////////////////////////////////////////////////////
//
//  MessageHandler is responsible for ...
//
///////////////////////////////////////////////////////////////////////////////
class MessageHandler
  {
  public:
    explicit MessageHandler();
    virtual ~MessageHandler();
  private:
    MessageHandler(const MessageHandler&);
    MessageHandler& operator=(const MessageHandler&);

  };

#endif  // D_MessageHandler_H
