#include <iostream>
#include <string>
using namespace std;

// ฟังก์ชันสำหรับสลับค่าผ่าน Pointer
void swapValue(int* a, int* b)
{
    int temp = *a;  
    *a = *b;        
    *b = temp;      
}

int main() 
{
    int x = 10, y = 20;

    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapValue(&x, &y);

    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}