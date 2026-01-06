#include <iostream>
#include <string>

using namespace std;

struct Student
{
	string nickname;
	string id;
	string lineid;
	string phone;
};

void printStudent(Student s)
{
	cout << "Nickname: " << s.nickname << endl;
	cout << "ID: " << s.id << endl;
	cout << "Line ID: " << s.lineid << endl;
	cout << "Phone: " << s.phone << endl;
}
int main()
{
	Student s1;

	cout << " \n--- Input Student 1 ---\n";
	cout << "Nickname: ";
	cin >> s1.nickname;
	cout << "ID: ";
	cin >> s1.id;
	cout << "Line ID: ";
	cin >> s1.lineid;
	cout << "Phone: ";
	cin >> s1.phone;

	cout << " \n------+ Output Student 1 +------\n";
	printStudent(s1);

	return 0;
}