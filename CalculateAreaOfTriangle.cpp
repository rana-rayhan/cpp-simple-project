#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //----      Area of circel code    ------
    // double area, asq, pi, pisq, areaCircel;
    // cout<<"Enter area of circel\n";
    // cin>>area;
    //         pi=3.141593;
    //         asq=area*area;
    //         areaCircel=pi*asq;
    // cout<<areaCircel;

    //----      Area of triangle  code   ------

    double base, height, area;
    cout << "Enter base and hight of triangle\n";
    cin >> base >> height;
    area = ((base / height) * 2);
    cout << "Area of triangle is = " << area << endl;

    return 0;
}