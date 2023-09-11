#include <iostream>
using namespace std;

int main()
{
    int firstNum = 0, secondNum = 1, fibonacci, n;
    cout << "Enter range of Fibonacci : ";
    cin >> n;

    // With for loop------------------------

    // for (int i = 0; i < n; i++)
    // {
    //     if (i <= 1)
    //     {
    //         fibonacci = i;
    //     }
    //     else
    //     {
    //         fibonacci = firstNum + secondNum;
    //         firstNum = secondNum;
    //         secondNum = fibonacci;
    //     }
    //     cout << fibonacci << " ";
    // }

    // cout << endl;

    // With while loop--------------------------------

    int i = 0;
    while (i < n)
    {
        if (i <= 1)
        {
            fibonacci = i;
        }
        else
        {
            fibonacci = firstNum + secondNum;
            firstNum = secondNum;
            secondNum = fibonacci;
        }
        cout << fibonacci << " ";
        i++;
    }

    return 0;
}