#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int arr[] = { 10, 20, 30, 40 };
    int* p = arr; 

    
    for (int i = 0; i < 4; i++) 
    {
       
        cout << *(p + i) << " ";
    }

    cout << endl;
    return 0;
}
