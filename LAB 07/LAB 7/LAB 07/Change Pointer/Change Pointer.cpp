#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int a = 100;
    int* p = &a;

    *p = 100;
    cout << "a = " << a << endl;
    return 0;
}