#ifndef ComLink_H
#define ComLink_H
class ComLink
{
public:
  ComLink(){};
  virtual ~ComLink(){};
  virtual void send(char * message) = 0;
};

#endif