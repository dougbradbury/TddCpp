#include "CppUTest/TestHarness.h"
#include "Cache.h"
#include <string>
#include <map>
using namespace std;

TEST_GROUP(Cache)
{
  Cache* cache;

  void setup()
  {
    cache = new Cache();
  }
  void teardown()
  {
    delete cache;
  }
};

TEST(Cache, BadTest)
{
  cache->put("teacher", "Jared");
  map<string, string> * hash = cache->getMap();
  CHECK(hash->find("teacher") != hash->end());
}

TEST(Cache, BetterTest)
{
  cache->put("teacher", "Jared");
  char const * name = cache->get("teacher");
  STRCMP_EQUAL(name, "Jared");
  LONGS_EQUAL(1, cache->count());
}

TEST(Cache, BestTest)
{
  cache->put("teacher", "Jared");
  char const * name = cache->get("teacher");
  STRCMP_EQUAL(name, "Jared");
  LONGS_EQUAL(1, cache->count());  
  
  cache->remove("teacher");
  name = cache->get("teacher");
  LONGS_EQUAL(0, cache->count());
  CHECK(name == NULL);
}

