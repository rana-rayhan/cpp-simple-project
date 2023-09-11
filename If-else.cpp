#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    if (n1 > n2)
    {
        cout << n1 << " is greter then number = " << n2 << endl;
    }
    else
    {
        cout << n2 << " is greter then number = " << n1 << endl
             << endl;
    }
    if (n1 % 2 == 0)
    {
        cout << n1 << "  evan number\n\n";
    }
    else
    {
        cout << n1 << "  odd number\n\n";
    }

    if (n2 % 2 == 0)
    {
        cout << n2 << "  evan number\n\n";
    }
    else
    {
        cout << n2 << "  odd number";
    }

    return 0;
}