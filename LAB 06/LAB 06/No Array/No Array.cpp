
#include <iostream>
#include <string>
using namespace std;



// ฟังก์ชันคำนวณเกรด
void calculateGrade(double score, char& grade) {
    if (score >= 80) grade = 'A';
    else if (score >= 70) grade = 'B';
    else if (score >= 60) grade = 'C';
    else if (score >= 50) grade = 'D';
    else grade = 'F';
}

// ฟังก์ชันแสดงผลข้อมูลนักศึกษา
void displayStudentInfo(const string& name, const string& id, double score, char grade) {
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;
}

int main()
{
    string name, id;
    double score;
    char grade;
    // TODO: รับชื่อ (getline)
    cout << "Enter name: ";
    getline(cin, name);

    // TODO: รับรหัสและคะแนน (cin)
    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter score: ";
    cin >> score;

    // TODO: calculateGrade(score, grade);
    calculateGrade(score, grade);

    // TODO: displayStudentInfo(name, id, score, grade);
    displayStudentInfo(name, id, score, grade);

    return 0;
}
