// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::string studentId;
    std::string studentName;
    int score;

    // เข้า
    std::cout << "Student ID: ";
    std::getline(std::cin, studentId);

    std::cout << "Student Name: ";
    std::getline(std::cin, studentName);

    do {
        std::cout << "Total Score (0-100): ";
        std::cin >> score;
        if (score < 0 || score > 100)
            std::cout << "Please enter a valid score between 0 and 100.\n";
    } while (score < 0 || score > 100);

    // คำนวนเกรด
    char grade;
    if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if (score >= 60)
        grade = 'D';
    else
        grade = 'F';

    // ออก
    std::cout << "\n<>------- Result -------<>\n";
    std::cout << "Student ID: " << studentId << std::endl;
    std::cout << "Name: " << studentName << std::endl;
    std::cout << "Total Score: " << score << std::endl;
    std::cout << "Grade: " << grade << std::endl;

    return 0;
}
    

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
