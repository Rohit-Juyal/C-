#include <iostream>
using namespace std;

class Test
{
    int a;
    int *p;
    
    Test(int x)
    {
        a = x;
        p = new int[a];
    }
    Test(Test &t)
    {
        a = t.a;
       // p = t.p;   (it is wrong)
       p = new int[a];
    }

};

int main()
{
    
}