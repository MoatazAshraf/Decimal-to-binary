#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;
const int Max=64;
class stackdic
{
    public:
     stackdic();
     void push (int );
     int pop();
     void display ();
     bool isstackfull ();
     bool isstackEmpty ();
    private:
     int elements [Max];
     int top;
};

#endif // STACK_H
