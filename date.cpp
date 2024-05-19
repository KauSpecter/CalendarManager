#include "date.h"
#include <iostream>
using namespace std;
    
date::date() {
    
}

date::date(int a , int b , int c) {
        day=a;
        month=b;
        year=c;
    }
    
void date::setday(int d) {
    day=d;
}
void date::setmonth(int m) {
    month=m;
}
void date::setyear(int y) {
    year=y;
}    
int date::getday() {
    return day;
}
int date::getmonth() {
    return month;
}
int date::getyear() {
    return year;
}
void date::displayfordate() {
        cout<<month<< "/"<<day<<"/"<<year<<"\n";
}
    