
#include <iostream>
#include <string>
#include <random>
using namespace std;


int main()
{
    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> dist(1, 100);

    cout << "เกมทายเลข 1 ถึง 100\n";
    cout << "พิมพ์ 0 เพื่อออกจากเกม\n\n";

    bool play = true;
    while (play) {
        int target = dist(rng);
        int attempts = 0;
        cout << "ระบบสุ่มเลข — เริ่มทายได้\n";

        while (true) {
            cout << "คำตอบ ===: ";
            string line;
            if (!getline(cin, line)) 
            {
                return 0;
            }
            auto first = line.find_first_not_of(" \t\r\n");
            if (first == string::npos) 
            {
                cout << "ใส่ตัวเลขระหว่าง 1-100 หรือ 0 เพื่อออก\n";
                continue;
            }
            auto last = line.find_last_not_of(" \t\r\n");
            string token = line.substr(first, last - first + 1);

            int guess = 0;
            try {
                size_t idx = 0;
                guess = stoi(token, &idx);
                if (idx != token.size()) 
                {
                    throw invalid_argument("extra");
                }
            }
            catch (...) 
            {
                cout << "กรอกไม่ถูกต้อง — ใส่ตัวเลข 1 ถึง 100 หรือ 0 เพื่อออก\n";
                continue;
            }

            if (guess == 0) 
            {
                cout << "ออกจากเกม\n";
                return 0;
            }

            if (guess < 1 || guess > 100) 
            {
                cout << "เลขต้องอยู่ระหว่าง 1 ถึง 100\n";
                continue;
            }

            ++attempts;

            if (guess < target) 
            {
                cout << "มากกว่า \n";
            }
            else if (guess > target) 
            {
                cout << "น้อยกว่า \n";
            }
            else 
            {
                cout << "ถูกต้อง! คุณทายได้ใน " << attempts << " ครั้ง\n";
                break;
            }
        }

        while (true) {
            cout << "ต้องการเล่นอีกครั้งไหม (Y/N) Yเพื่อเล่นต่อ หรือ Nออกเกม: ";
            string rsp;
            if (!getline(cin, rsp)) 
            {
                return 0;
            }
            if (!rsp.empty()) {
                char c = rsp[0];
                if (c == 'y' || c == 'Y') 
                {
                    cout << '\n';
                    break; 
                }
                if (c == 'n' || c == 'N') 
                {
                    play = false;
                    break;
                }
            }
            cout << "กรุณาพิมพ์ 'Y'เพื่อเล่นต่อ หรือ 'N'เพื่อหยุดเล่น\n";
        }
    }

    cout << "ขอบใจอิหลีเด้อค้าบบบบต้าวอ้วน\n";
    return 0;
}

