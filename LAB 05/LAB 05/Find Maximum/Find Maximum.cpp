#include <iostream>
#include <string>	
#include <cmath>

using namespace std;

int maxOfThree(int a, int b,int c) 
{
	if (a >= b && a >= c)
		return a;
	else if (b >= a && b >= c)
		return b;
	else return c;
}

int main()
{
	int a, b, c;
	double PI = acos(-1);

	cout << "Value of PI is " << PI << endl;

	cout << "enter three integers a: ";
	cin >> a;
	cout << "enter three integers b: ";
	cin >> b;
	cout << "enter three integers c: ";
	cin >> c;
	int max = 0;
	max = maxOfThree(a, b, c);
	cout << "The maximum value is " << max << endl;
	return 0;
}