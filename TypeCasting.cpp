#include <iostream>
using namespace std;
int main()
{
    /*
    #include <iomanip> -- cout<<setprecision (10);
    & this for adding more 000 to num !
    -- cout<<fixed; -- before setprecision (2) for set
    the num after dot for exmpl- 2.00 !
    -- cout<<setw (15); -- for set width or length !
    */

    float num1 = 10, num2 = 5;

    cout << showpoint; // for show point after the num 0.000 !
    float sum = num1 + num2;
    cout << "Sum is =" << sum << endl;

    double sub = (float)num1 - num2; // convert one num #int to float !
    cout << "Sub is =" << sub << endl;

    cout << noshowpoint; // for no show point after the num 0.000 !
    float multi = num1 * num2;
    cout << "multi is =" << multi << endl;

    float div = num1 / num2;
    cout << "div is =" << div << endl;

    return 0;
}