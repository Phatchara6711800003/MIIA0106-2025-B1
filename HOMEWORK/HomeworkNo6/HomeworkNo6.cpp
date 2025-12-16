#include <iostream>
#include <string>
using namespace std;

void display_instructions() {
    cout << "--- Line Follower Control Simulation ---" << endl;
    cout << "Enter the sensor reading to simulate where the black line is:" << endl;
    cout << "1: Left (The line is on the left)" << endl;
    cout << "2: Center (The line is on the middle)" << endl;
    cout << "3: Right (The line is on the right)" << endl;
    cout << "0: Stop Simulation " << endl;
    cout << "----------------------------------------" << endl;
}

int main()
{
    int sensor_reading;
    display_instructions();
    while (true) {
        cout << "\nEnter sensor reading (1, 2, 3, or 0 to stop): ";
        if (!(cin >> sensor_reading)) {
            cout << "Invalid input. Please enter a number (0-3)." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        if (sensor_reading == 0) {
            cout << "Simulation stopped. The robot is now stopping." << endl;
            break;
        }
        else if (sensor_reading == 1) {
            cout << "---> Status: Line on the LEFT. Action: Turning Left." << endl;
        }
        else if (sensor_reading == 2) {
            cout << "---> Status: Line in the CENTER. Action: Moving Forward." << endl;
        }
        else if (sensor_reading == 3) {
            cout << "---> Status: Line on the RIGHT. Action: Turning Right." << endl;
        }
        else {
            cout << "Invalid code. Please use 1, 2, 3 for movement, or 0 to stop." << endl;
        }
    }
    return 0;
}