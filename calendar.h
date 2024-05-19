#ifndef calendar_H
#define calendar_H

#include <iostream>
#include "event.h"

using namespace std;

class calendar {
  public:
  event evenlist[100];
  int count;
  
  calendar();
  calendar();
  event findevent(string d);
  bool addevent(event e);
  
  
  
};