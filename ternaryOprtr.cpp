#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    (n % 2 == 0) ? cout << "Num is Even" << n : cout << "Num is odd" << n;

    return 0;
}