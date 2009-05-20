#ifndef D_MessageHandler_H
#define D_MessageHandler_H

class Database;
class ComLink;

class MessageHandler
  {
  public:
    explicit MessageHandler(ComLink* comLink, Database * database);
    virtual ~MessageHandler();
    void receive(char *);
  private:
    ComLink * comLink;
    Database * database;
    char * return_message;
    MessageHandler(const MessageHandler&);
    MessageHandler& operator=(const MessageHandler&);

  };

#endif  // D_MessageHandler_H
