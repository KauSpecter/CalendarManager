#include "appointment.h"

#include <iostream>
using namespace std;


appointment::appointment(string con , date dt,timee tm , string des , string loc) {
        con=contact;
        d=dt;
        t=tm;
        des=description;
        loc=location;
}


void appointment::setcontact(int co) {
    contact=co;
}
string appointment::getcontact() {
    return contact;
}