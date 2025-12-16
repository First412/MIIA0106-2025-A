#include <iostream>
#include <string>	
using namespace std;


double rectanglearea(double width, double length)
{
	return width * length;
}
double circlearea(double radius)
{
	const double pi = 3.14;
	return 3.14 * radius * radius;
}

int main()
{
	double width, length, radius;
	
	//สี่เหลี่ยมผืนผ้า
	cout << "ค่า width ";
	cin >> width;
	cout << "ค่า length ";
	cin >> length;
	cout << "พื้นที่สี่เหลี่ยมผืนผ้า = " 
		<< rectanglearea(width, length) << endl;

	//วงกลม
	cout << "ค่า radius ";
	cin >> radius;
	cout << "พื้นที่วงกลม = " 
		<< circlearea(radius) << endl;

	return 0;
}