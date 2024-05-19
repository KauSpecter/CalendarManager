#include "event.h"
#include "date.h"
#include "timee.h"

#include <iostream>
using namespace std;

event::event() {
    
}

event::event(date dt,timee tm , string des , string loc) {
    d=dt;
    t=tm;
    des=description;
    loc=location;
}

void event::setdescription(int e) {
    description=e;
}
void event::setlocation(int l) {
    location=l;
}
string event::getdescription() {
    return description;
}
string event::getlocation() {
    return location;
}