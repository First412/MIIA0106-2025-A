#include <iostream>
#include <string>
using namespace std;

struct Student
{
	string nickname;
	string stid;
};
int main()
{
	Student s1;
	Student *p = nullptr; 
	// todo 2
	p = &s1;
	// todo 3
	p->nickname = "First";
	p->stid = "6811130033";
	// todo 4
	cout << "Nickname: " << p->nickname << endl;
	cout << "ID: " << p->stid << endl;

	return 0;
}
