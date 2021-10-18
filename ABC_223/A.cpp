#include <iostream>
using namespace std;
int main()
{
    long long X;
    cin >> X;
    if (X >= 100 && X % 100 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}