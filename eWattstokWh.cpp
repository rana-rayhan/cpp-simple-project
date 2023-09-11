#include <iostream>
using namespace std;

int main()
{  
    while(1){

    double watt, hour, price, day, sum;
    cout<<"Entar your device Watts: "<<endl;
    cin>>watt;
    cout<<"Enter hours of using per day : "<<endl;
    cin>>hour;
    cout<<"Price of electricty kWh : "<<endl;
    cin>>price;
    cout<<"Enter day of using : "<<endl;
    cin>>day;
cin.clear();
cin.ignore(123, '\n');

    sum=(((watt*hour)/1000)*(price*day));

    cout<<sum<<endl;
    }

return 0;
}