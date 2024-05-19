#ifndef meeting_H
#define meeting_H_H

#include <iostream>
#include "date.h"
#include "timee.h"
#include "event.h"
using namespace std;

class meeting:event {
    public:
    string host;
    
    
    meeting(string ho , date dt,timee tm , string des , string loc);
    void sethost(int hos);
    string gethost();
    
};

#endif
