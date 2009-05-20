#include "MessageHandler.h"
#include <string.h>
#include "Database.h"
#include "ComLink.h"
#include <stdio.h>

MessageHandler::MessageHandler(ComLink* comLink, Database * database) :
comLink(comLink),
database(database),
return_message(0)
{
}

MessageHandler::~MessageHandler()
{
  if (return_message)
    delete[] return_message;
}

void MessageHandler::receive(char * message)
{
  if (strncmp(message, "echo", 4) == 0)
    comLink->send(message + 5);
  else 
  {
    float balance = database->getCurrentBalance();
    return_message = new char[10];
    snprintf(return_message, 10, "$%.2f", balance);
    comLink->send(return_message);
  }
}