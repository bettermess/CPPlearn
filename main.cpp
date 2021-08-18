#include "Complex.h"
#include "String.h"
#include "jichengfuhe.h"
#include <iostream>
#include "virtualtest.h"

using namespace std;

void print()
{}

template <typename T, typename... Types>
void print(const T& firstArg, const Types&... args)
{
    cout<<firstArg<<endl;
    cout<<sizeof...(args)<<endl;
    print(args...);
}


int main()
{   
    print(1,123,213,1,23,123);
    B *x = new B;
    return 0;

}
