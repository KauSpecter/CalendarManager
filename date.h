#ifndef date_H
#define date_H


#include <iostream>
using namespace std;

class date {
    public:
    int day;
    int month;
    int year;
    
    date();
    date(int a , int b , int c);
    void setday(int d);
    void setmonth(int m);
    void setyear(int y);
    int getday();
    int getmonth();
    int getyear();
    void displayfordate();
   
};

#endif 

// What I don't know - Compareto and Overriding the toString method.