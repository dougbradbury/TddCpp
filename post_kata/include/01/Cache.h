#ifndef D_Cache_H
#define D_Cache_H
#include <string>
#include <map>

///////////////////////////////////////////////////////////////////////////////
//
//  Cache is responsible for ...
//
///////////////////////////////////////////////////////////////////////////////

class Cache
  {
  public:
    explicit Cache();
    virtual ~Cache();
    void put(char *, char *);
    std::map<std::string, std::string> * getMap();
    char const * get(char*);
    int count();
    void remove(char*);
  private:

    std::map<std::string, std::string> data;
    Cache(const Cache&);
    Cache& operator=(const Cache&);

  };

#endif  // D_Cache_H
