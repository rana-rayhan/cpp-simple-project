#include <iostream>
using namespace std;

int main()
{

    // ---- Temperature converter ----- //
    double num1, c, f, k;
    cout << "Enter celsius | Fahrenheit | s \n\n";
    cin >> num1;
    cout << "Chosen number is = " << num1 << endl
         << endl;
    // Celsius to Fahrenheit
    c = ((num1 * 9 / 5) + 32);
    cout << "Celsius to Fahrenheit is = " << c << endl
         << endl;

    // Fahrenheit to Celsius
    f = ((num1 - 32) * 5 / 9);
    cout << "Fahrenheit to Celsius is = " << f << endl
         << endl;

    // Celsius to Kalvin
    k = num1 + 273.15;
    cout << "Celsius to Kalvin is = " << k << endl
         << endl;

    return 0;
}