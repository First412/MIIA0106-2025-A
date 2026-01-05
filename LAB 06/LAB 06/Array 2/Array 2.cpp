
#include <iostream>
#include <string>
using namespace std;

void calculateGrade(double score, char& grade) {
    if (score >= 320) grade = 'A'; 
    else if (score >= 280) grade = 'B';
    else if (score >= 240) grade = 'C';
    else if (score >= 200) grade = 'D';
    else grade = 'F';
}

void displayStudentInfo(const string& name, const string& id, double total, char grade) {
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Total: " << total << endl;
    cout << "Grade: " << grade << endl;
    cout << "---------------------" << endl;
}

int main()
{
    const int N = 3; // students
    const int M = 4; // subjects

    string name[N], id[N];
    double score[N][M];
    double total[N];
    char grade[N];
    // TODO: วนรับ name/id
    for (int i = 0; i < N; ++i) {
        cout << "Enter name  student " << (i + 1) << ": ";
        getline(cin >> ws, name[i]);
        cout << "Enter ID  student " << (i + 1) << ": ";
        cin >> id[i];
    }
    // TODO: nested loop รับคะแนน M วิชา + รวม total[i]
    for (int i = 0; i < N; ++i) {
        total[i] = 0;
        for (int j = 0; j < M; ++j) {
            cout << "Enter score  subject " << (j + 1) << "  " << (i + 1) << ": ";
            cin >> score[i][j];
            total[i] += score[i][j];
        }
        // TODO: calculateGrade(total[i], grade[i]);
        calculateGrade(total[i], grade[i]);
    }
    // TODO: แสดงผลโดยใช้ displayStudentInfo(name[i], id[i], total[i], grade[i]);
    for (int i = 0; i < N; ++i) {
        displayStudentInfo(name[i], id[i], total[i], grade[i]);
    }

    return 0;
}
