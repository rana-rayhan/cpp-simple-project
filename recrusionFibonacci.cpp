#include <iostream>
using namespace std;

int fib(int f){
    if (f==1 || f==0){
        return f;
    }else {
        return fib(f-1)+fib(f-2);
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<fib(i)<<" ";
    }

return 0;
}