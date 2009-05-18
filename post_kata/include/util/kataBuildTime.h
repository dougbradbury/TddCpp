#ifndef D_kataBuildTime_H
#define D_kataBuildTime_H

///////////////////////////////////////////////////////////////////////////////
//
//  kataBuildTime is responsible for recording and reporting when
//  this project library was built
//
///////////////////////////////////////////////////////////////////////////////

class kataBuildTime
  {
  public:
    explicit kataBuildTime();
    virtual ~kataBuildTime();
    
    const char* GetDateTime();

  private:
      
    const char* dateTime;

    kataBuildTime(const kataBuildTime&);
    kataBuildTime& operator=(const kataBuildTime&);

  };

#endif  // D_kataBuildTime_H
