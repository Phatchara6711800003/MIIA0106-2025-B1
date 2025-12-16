#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    srand(time(0));                       // ตั้งค่า seed สำหรับ rand
    int randomNumber = rand() % 100 + 1;  // สุ่มเลข 1–100
    int guess;
    int tries = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;

    do
    {
        cout << "Enter the number you want to guess: ";
        cin >> guess;
        tries++;

        if (guess != randomNumber)
        {
            int difference = abs(guess - randomNumber);

            if (difference <= 10)
            {
                cout << "Very close! Let's try again!" << endl;
            }
            else
            {
                cout << "That's too far! Try again!" << endl;
            }

            if (guess < randomNumber)
            {
                cout << "You should increase the number more!" << endl;
            }
            else
            {
                cout << "You should decrease the number more!" << endl;
            }
        }
        else
        {
            cout << "Congratulations, you guessed correctly in "
                 << tries << " time(s)!" << endl;
            cout << "Press Enter to exit...";
            cin.ignore();
            cin.get();
        }

    } while (guess != randomNumber);

    return 0;
}
