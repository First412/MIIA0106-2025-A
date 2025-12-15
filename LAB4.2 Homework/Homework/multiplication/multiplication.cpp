
#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Student ID: ";
    string id;
    if (!getline(cin, id)) {
        return 0;
    }

    
    string lastDigits;
    for (int i = static_cast<int>(id.size()) - 1; i >= 0 && lastDigits.size() < 2; --i) {
        if (isdigit(static_cast<unsigned char>(id[i]))) {
            lastDigits.push_back(id[i]);
        }
    }

    if (lastDigits.empty()) {
        cout << "\n";
        return 1;
    }

    reverse(lastDigits.begin(), lastDigits.end());
    int value = stoi(lastDigits);

    cout << "Multiplication Table Student ID  " << value << ":\n";
    for (int i = 1; i <= 12; ++i) {
        cout << value << " x " << i << " = " << (value * i) << '\n';
    }

    return 0;
}

