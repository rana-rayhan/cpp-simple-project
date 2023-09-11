#include <iostream>
using namespace std;

int main()
{
    // getting input in arry
    int n, sum = 0;
    cout << "Please input students number : ";
    cin >> n;
    int marks[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter student mark " << i + 1 << " = ";
        cin >> marks[i];
        sum += marks[i];
    }

    int max = marks[0];
    int min = marks[0];
    for (int i = 1; i < n; i++)
    {
        if (max < marks[i])
        {
            max = marks[i];
        }
        if (min > marks[i])
        {
            min = marks[i];
        }
    }

    cout << endl
         << "Students maximum marks = " << max << endl;
    cout << "Students minimum marks = " << min << endl;
    cout << "Total students marks = " << sum << endl;
    float avg = (float)sum / n;
    cout << "Avarage students marks = " << avg << endl;

    return 0;
}