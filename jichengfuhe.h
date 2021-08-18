#ifndef JICHENGFUHE
#define JICHENGFUHE
#include <iostream>

using std::cout;
using std::endl;

class dad
{
public:
    dad() { cout<<"dad"<<endl;}
    virtual ~dad() { cout<<"~dad"<<endl; }
};

class comp
{
public:
    comp() { cout<<"comp"<<endl; }
    ~comp() { cout<<"~comp"<<endl; }
};



class son : public dad
{
private:
    comp A;

public:
    son() {cout << "son" <<endl; }
    ~son() {cout << "~son" << endl; }
};










#endif