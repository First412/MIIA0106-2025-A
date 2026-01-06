#include <iostream>
#include <string>
using namespace std;

//Phone
struct Phone
{
	string mobile;
	string home;
};
// Parent
struct Parent
{
	string name;
	string relationship;
	Phone contact;
};
// Student
struct Student
{
	string studentid;
	string nickname;
	string lineid;
	Phone mycontact;
	Parent myParent;
};
void displayStudentInfo(const Student& s)
{
	cout << "Student ID: " << s.studentid << endl;
	cout << "Nickname: " << s.nickname << endl;
	cout << "Line ID: " << s.lineid << endl;
	cout << "Student Mobile: " << s.mycontact.mobile << endl;
	cout << "Student Home: " << s.mycontact.home << endl;
	cout << "Parent Name: " << s.myParent.name << endl;
	cout << "Parent Relationship: " << s.myParent.relationship << endl;
	cout << "Parent Mobile: " << s.myParent.contact.mobile << endl;
	cout << "Parent Home: " << s.myParent.contact.home << endl;
}
int main()
{
	Student s;

	cout << "-----+Input Student Information+-----\n";
	cout << "Student ID: ";
	cin >> s.studentid;

	cout << "Nickname: ";
	cin >> s.nickname;

	cout << "Line ID: ";
	cin >> s.lineid;

	cout << "Student Mobile: ";
    cin >> s.mycontact.mobile;

	cout << "Student Home: ";
	cin >> s.mycontact.home;

	cout << "Parent Name: ";
	cin >> s.myParent.name;

	cout << "Parent Relationship: ";
	cin >> s.myParent.relationship;
	
	cout << "Parent Mobile: ";
	cin >> s.myParent.contact.mobile;

	cout << "Parent Home: ";
	cin >> s.myParent.contact.home;

	cout << "\n===== Student Information =====\n";
	displayStudentInfo(s);

	return 0;

}
