// C++
#include <iostream>
#include <string>
using namespace std;

void calculateGrade(double score, char& grade) {
    if (score >= 80) grade = 'A';
    else if (score >= 70) grade = 'B';
    else if (score >= 60) grade = 'C';
    else if (score >= 50) grade = 'D';
    else grade = 'F';
}

void displayStudentInfo(const string& name, const string& id, double score, char grade) {
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;
    cout << "---------------------" << endl;
}

int main()
{
    const int N = 5;
    string name[N], id[N];
    double score[N];
    char grade[N];
    // TODO: วนรับข้อมูล N คน
    // C++
    for (int i = 0; i < N; ++i) 
    {
        cout << "Student  " << (i + 1) << ":" << endl;
        cout << "Enter name: ";
        getline(cin >> ws, name[i]);
        cout << "Enter ID: ";
        cin >> id[i];
        cout << "Enter score: ";
        cin >> score[i];
        calculateGrade(score[i], grade[i]);
    }

    // TODO: วนแสดงผล N คน ด้วย displayStudentInfo
    for (int i = 0; i < N; ++i) {
        displayStudentInfo(name[i], id[i], score[i], grade[i]);
    }
    return 0;
}
