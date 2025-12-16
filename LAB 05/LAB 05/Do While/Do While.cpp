//ฟังก์ชันต้องใช้ Call by Reference (&) อย่างน้อย 1 ตัวแปร Do While Loop
#include <iostream>
#include <string>
using namespace std;

void Number(int number, int& maxValue, int& count)
{
	if (number == 0)
		return;
	else if(number < maxValue)
		maxValue = number;
	count++;
}
int main()
{
	int number;
	int maxValue = 999999;
	int count = 0;
	do
	{
		cout << "Enter number: ";
		cin >> number;
		if (number == 0)
		{
			cout << "\nTotal numbers entered: " << count << endl;
			cout << "Maximum value: " << maxValue << endl;
			break;

		}
		Number(number, maxValue, count);
	} while (true);

	
	return 0;
}