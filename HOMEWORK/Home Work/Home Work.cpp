#include <iostream>
using namespace std;
int main()
{
    cout << "For!\n";
    {
        for (int i = 1; i <= 10; i++) {
            std::cout << i << std::endl;
        }
        cout << "While!\n";
    }
    {
        int i = 1;
        while (i <= 10) {
            std::cout << i << std::endl;
            i++;
        }
    }
    cout << "Do-While!\n";
    int i = 1;

    do {
        std::cout << i << std::endl;
        i++;
    } while (i <= 10);

    return 0;
}