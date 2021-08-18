#ifndef VIRTUALTEST_H_
#define VIRTUALTEST_H_

#include <iostream>

using std::cout;


class A {
public:
    virtual void test() {cout<<"dad"<<endl;}
};

class B:public A{
public:
    virtual void test() {cout<<"son"<<endl;}
};




#endif