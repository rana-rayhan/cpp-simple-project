#include <iostream>
using namespace std;

int main()
{
    int n, pos = -1;
    int num[] = {
        20,
        30,
        40,
        50,
        60,
        70,
    };
    cout << "Enter the number you looking for : ";
    cin >> n;

    for (int i = 0; i < 6; i++)
    {
        if (n == num[i])
        {
            pos = i + 1;
            break;
        }
    }
    if (pos == -1)
    {
        cout << "Value not found";
    }
    else
    {
        cout << "The value of " << n << " Position is : " << pos;
    }

    return 0;
}