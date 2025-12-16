#include <iostream>
#include <string>
using namespace std;
// Call by Value


void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	// แสดงค่าในฟังก์ชัน
	cout << "Inside function (after swap):" << endl;
	cout << "a = " << a << ", b = " << b << endl;
}
int main() {
	int a = 10, b = 20;
	cout << "Before swap:" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	swap(a, b); // ส่งค่าแบบ copy (Call by Value)
	cout << "After swap (in main):" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	return 0;
}