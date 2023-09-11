#include <iostream>
#include <stdlib.h> //---include in header for random number-----
using namespace std;


int main()
{
    cout<<"Guess your number between 1-9\n";
while(1){
    int n;
    cin>>n;
    int randNum= rand()%9+1;
    cin.clear();
    cin.ignore(123, '\n');
    if(n==randNum){
        cout<<"\n\n****----You Won----****\n\n";
        cout<<"\n\nTo continue choose between 1-9 Again:\n";
       
    }else if(n!=randNum){
        cout<<"Please try agin.\nNumber was : "<<randNum<<endl<<endl;
    }

}

return 0;
}