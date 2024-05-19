#ifndef appointment_H
#define appointment_H

#include <iostream>
#include "date.h"
#include "timee.h"
#include "event.h"
using namespace std;

class appointment:event {
    public:
    string contact;
    
    
    appointment(string con , date dt,timee tm , string des , string loc);
    void setcontact(int co);
    string getcontact();
    
};

#endif





