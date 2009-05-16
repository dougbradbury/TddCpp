#ifndef D_MessageHandler_H
#define D_MessageHandler_H

///////////////////////////////////////////////////////////////////////////////
//
//  MessageHandler is responsible for ...
//
///////////////////////////////////////////////////////////////////////////////
#include "ComLink.h"

class MessageHandler
  {
  public:
    explicit MessageHandler(ComLink* comlink);
    virtual ~MessageHandler();
    void receive(char * message);

  private:
    ComLink * mComLink;
    MessageHandler(const MessageHandler&);
    MessageHandler& operator=(const MessageHandler&);

  };

#endif  // D_MessageHandler_H
