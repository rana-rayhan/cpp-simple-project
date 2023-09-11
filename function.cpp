#include <iostream>
using namespace std;

//------------Fucntion type one-----------------
void add(int a, int b);

//------------Function type 2--------------------
void divi(int a, int b){
    float sum=(float)a/b;
    cout<<sum<<"  "<<endl;
}


int main()
{

int n1,n2;
cin>>n1>>n2;
add(n1,n2);
divi(n1,n2);

return 0;
}

//------------Fucntion type one----------------
void add(int a, int b){
    int sum=a+b;
    cout<<sum<<"  "<<endl;
}