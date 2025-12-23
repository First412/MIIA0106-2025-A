#include <iostream>
#include <string>
using namespace std;

void calculateGrade(double score, char& grade) 
{
    if (score >= 80) grade = 'A';
    else if (score >= 70) grade = 'B';
    else if (score >= 60) grade = 'C';
    else if (score >= 50) grade = 'D';
    else grade = 'F';
}
void displayStudentInfo(const string& name, const string& id, double score, char grade) 
{
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;
    cout << "---------------------" << endl;
}
int main()
{
    int size;
    cout << "Enter number of students: ";
    cin >> size;
    cin.ignore(); // เคลียร์ newline ก่อน getline

    string* name = new string[size];
    string* id = new string[size];
    double* score = new double[size];
    char* grade = new char[size];

    // TODO: วนรับข้อมูล size คน
    for (int i = 0; i < size; ++i) 
    {
        cout << "Enter name: ";
        getline(cin >> ws, name[i]);
        cout << "Enter ID: ";
        cin >> id[i];
        cout << "Enter score: ";
        cin >> score[i];
        // TODO: calculateGrade(score[i], grade[i]);
        calculateGrade(score[i], grade[i]);
    }

    // TODO: วนแสดงผล size คน ด้วย displayStudentInfo
    for (int i = 0; i < size; ++i) {
        displayStudentInfo(name[i], id[i], score[i], grade[i]);
    }

    // TODO: delete[] ให้ครบทุกตัวแปร
    delete[] name;
    delete[] id;
    delete[] score;
    delete[] grade;

    return 0;
}
