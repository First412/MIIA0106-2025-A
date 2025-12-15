#include <iostream>
#include <string>

using namespace std;

void controlMotor(int leftSensor, int rightSensor) 
{
    
    if (leftSensor == 1 && rightSensor == 1) 
    {
        cout << "Status: Forward (Forward)" << endl;
    }
    
    else if (leftSensor == 1 && rightSensor == 0) 
    {
        cout << "Status: Left (Turn Left)" << endl;
    }
    
    else if (leftSensor == 0 && rightSensor == 1) 
    {
        cout << "Status: Right (Turn Right)" << endl;
    }
    
    else if (leftSensor == 0 && rightSensor == 0) 
    {
        cout << "Status: Stop or Go (Stop/Go)" << endl;
    }
}

int main() 
{
    // --- การจำลองการทำงาน ---

    cout << "--- Line Follower Robot ---" << endl;

    
    cout << "A. Sensor (L=1, R=1): ";
    controlMotor(1, 1);

    
    cout << "B. Sensor (L=1, R=0): ";
    controlMotor(1, 0);

    
    cout << "C. Sensor (L=0, R=1): ";
    controlMotor(0, 1);

    return 0;
}