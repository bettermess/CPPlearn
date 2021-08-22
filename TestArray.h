#ifndef TESTARRAY_H
#define TESTARRAY_H
#include <array>
#include <cstdlib>
#include <istream>
#include <ctime>

using namespace std;

namespace jyTestArray
{

const int Asize = 1000000;

int compareLong(const void* a, const void* b)
{
    return (*(long*)a- *(long*)b);
}


void test_array()
{
    cout << "\ntest_array()\n";

    array<long, Asize> c;

    srand(time(NULL));
    clock_t time_start = clock();
    for(long i=0; i<Asize; ++i)
    {
        c[i] = rand();
    }
    cout << "milli-seconds : "<< (clock()- time_start) <<endl;
    cout << "array.size() = " << c.size()<<endl;
    cout << "array.front() = " << c.front() <<endl;
    cout << "array.back() = " << c.back() << endl;
    cout << "array.data() = " << c.data() << endl;

    time_start = clock();

    long target = 2;

    ::qsort(c.data(), Asize, sizeof(long), compareLong);

    long *pItem = (long*)::bsearch(&target, c.data(), Asize, sizeof(long), compareLong);

    cout << "qsort()+bsearch(), milli-seconds: "<< clock() - time_start << endl;

    if(pItem)
    {
        cout << "found, " << *pItem << endl ;

    }
    else
    {
        cout << "not found " << endl;
    }

}

}








#endif