#include "Cache.h"

using namespace std;

Cache::Cache()
{
}

Cache::~Cache()
{
}

void Cache::put(char * key, char * value)
{
  data.insert(make_pair(string(key), string(value)));
}
std::map<std::string, std::string> * Cache::getMap()
{
  return &data;
}

char const * Cache::get(char* key)
{
  map<string, string>::iterator found = data.find(key);
  if (found == data.end())
    return NULL;
  return found->second.c_str();
}

int Cache::count()
{
  return data.size();
}

void Cache::remove(char* key)
{
  data.erase(string(key));
}
