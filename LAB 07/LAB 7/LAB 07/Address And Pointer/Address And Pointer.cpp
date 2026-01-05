#include <iostream>
#include <string>

using namespace std;

int main() {
    int score = 50;      
    int* ptr = &score;   

    
    cout << score << endl;   // แสดงค่าของ score
    cout << &score << endl;  // แสดง address ของ score
    cout << ptr << endl;     

    return 0;
}