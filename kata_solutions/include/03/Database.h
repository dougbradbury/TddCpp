#ifndef Database_H
#define Database_H
class Database
{
  public:
    Database(){};
    virtual ~Database(){};
    virtual float getCurrentBalance() = 0;
};

#endif