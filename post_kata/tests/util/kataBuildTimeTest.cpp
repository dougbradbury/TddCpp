#include "CppUTest/TestHarness.h"
#include "kataBuildTime.h"

TEST_GROUP(kataBuildTime)
{
  kataBuildTime* projectBuildTime;

  void setup()
  {
    projectBuildTime = new kataBuildTime();
  }
  void teardown()
  {
    delete projectBuildTime;
  }
};

TEST(kataBuildTime, Create)
{
  CHECK(0 != projectBuildTime->GetDateTime());
}

