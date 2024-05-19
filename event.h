#ifndef event_H
#define event_H

#include <iostream>
#include "date.h"
#include "timee.h"

using namespace std;


class event {
  public:
  
  date d;
  timee t;
  string description;
  string location;
  
  event();
  event(date dt,timee tm , string des , string loc);
  void setdescription(int e);
  void setlocation(int l);
  string getdescription();
  string getlocation();
  
  
  
};

#endif
