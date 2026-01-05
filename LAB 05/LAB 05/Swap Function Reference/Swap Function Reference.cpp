#include <iostream>
#include <string>	

using namespace std;


// Call by Reference
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
int main() {
	int a = 10, b = 20;
	cout << "Before swap:" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	swap(a, b); // เรียกแบบ reference
	cout << "After swap:" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	return 0;
}