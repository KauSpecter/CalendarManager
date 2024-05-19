#ifndef timee_H
#define timee_H


#include <iostream>
using namespace std;

class timee {
    public:
    int hours;
    int minutes;
    
    timee();
    timee(int f , int e);
    void sethours(int h);
    void setminutes(int m);
    int gethours();
    int getminutes();
    void displayfortimee();
    
};

#endif