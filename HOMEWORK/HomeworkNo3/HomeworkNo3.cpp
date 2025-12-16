#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int i = 1;
    do {
        sum += i;
        i++;
    } while (i <= 100);

    cout << "The sum of numbers from 1 to 100 is: " << sum << endl;
    return 0;
}