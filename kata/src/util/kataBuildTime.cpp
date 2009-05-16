#include "kataBuildTime.h"

kataBuildTime::kataBuildTime()
: dateTime(__DATE__ " " __TIME__)
{
}

kataBuildTime::~kataBuildTime()
{
}

const char* kataBuildTime::GetDateTime()
{
    return dateTime;
}

