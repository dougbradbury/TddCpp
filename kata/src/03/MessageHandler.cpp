#include "MessageHandler.h"
#include <string.h>

MessageHandler::MessageHandler(ComLink* comlink) :
mComLink(comlink)
{
}

MessageHandler::~MessageHandler()
{
}

void MessageHandler::receive(char * message)
{
  if (strlen(message) == 0)
    return;
  mComLink->send(message + 5);
}
