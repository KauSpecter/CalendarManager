#include "timee.h"

#include <iostream>
using namespace std;

timee::timee() {
    
}

timee::timee(int f , int e) {
        hours=f;
        minutes=e;
    }

void timee::sethours(int h) {
    hours=h;
}
void timee::setminutes(int m) {
    minutes=m;
}    
int timee::gethours() {
    return hours;
}
int timee::getminutes() {
    return minutes;
}

void timee::displayfortimee() {
        cout<<hours<< ":"<<minutes<<"\n";
}
    