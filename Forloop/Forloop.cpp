#include <iostream>
#include <string>

using namespace std;

void processNumber(int input, int& minValue, int& count)
{
    if (count == 0 || input < minValue) {
        minValue = input;
    }
    count++;
}
int main()
{
    int number;
    int minValue = 0;
    int count = 0;
    while (true) {
        cout << "Enter number: ";
        cin >> number;
        if (number == 0) {
            break;
        }
        processNumber(number, minValue, count);
    }
    cout << endl;
    cout << "Total numbers entered: " << count << endl;
    if (count > 0) {
        cout << "Minimum value: " << minValue << endl;
    }
    else {
        cout << "No numbers were entered." << endl;
    }
    return 0;
}