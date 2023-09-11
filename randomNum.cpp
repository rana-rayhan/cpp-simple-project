#include <iostream>
#include <stdlib.h> //---include in header for random number-----
using namespace std;


int main()
{
int n;
cin>>n;
for (int i=0;i<n;i++){
    int randNum = rand()%6+1;
    cout<<i+1<<" = "<<randNum<<endl;
}

return 0;
}