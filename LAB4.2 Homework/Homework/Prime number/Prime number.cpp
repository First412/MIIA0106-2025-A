#include <iostream>
#include <string>   


using namespace std;


bool isPrime(int n) 
{
    
    if (n <= 1) 
    {
        return false;
    }   
    for (int i = 2; i * i <= n; ++i) 
    {
        if (n % i == 0) 
        {
            return false;
        }
    }
    return true;
}

int main() {
    int number;

    cout << "--- ตรวจสอบตัวเลขจำนวนเฉพาะหรือไม่ ---" << endl;
    cout << "ป้อนเลข 0 เพื่อออกจากโปรแกรม" << endl;
    cout << "---------------------------------------" << endl;

    while (true) {
        cout << "\nกรุณาป้อนจำนวนเต็มบวกที่ต้องการตรวจสอบ: ";
        if (!(cin >> number)) 
        {
            cerr << "Input Error: กรุณาป้อนเฉพาะตัวเลขที่เป็นจำนวนเต็มเท่านั้น" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue; 
        }
        if (number == 0) {
            cout << "\nแจ๋วว ขอบคุุณค่าบบ" << endl;
            break; 
        }
        bool result = isPrime(number);
        cout << "ผลลัพธ์: " << number << " ";

        if (result) {
            cout << "เป็น **จำนวนเฉพาะ**" << endl;
        }
        else {
            cout << "**ไม่เป็น** จำนวนเฉพาะ" << endl;
        }
    }

    return 0;
}