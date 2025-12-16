#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "ENTER THE NUMBER :";
    cin >> num;
    cout << " Multiplication Table : " << num << endl;
    for (int i = 1; i <= 12; ++i)
    {
        cout << num << "x" << i << "=" << num * i << endl;
    }
    return 0;
}