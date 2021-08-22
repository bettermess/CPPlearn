#include "Complex.h"
#include "String.h"
#include "jichengfuhe.h"
#include <iostream>
#include "virtualtest.h"
#include <vector>
#include <algorithm>
#include <functional>
#include "TestArray.h"

using namespace std;

int main()
{   
    int *p = allocator<int>().allocate(512, (int*)0);
    allocator<int>().deallocate(p, 512);
    jyTestArray::test_array();
    return 0;

}
