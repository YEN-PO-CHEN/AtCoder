// A - Find Multiple
#include <iostream>
using namespace std;
int main()
{
    int A, B, C, AA, BB;
    cin >> A >> B >> C;
    AA = A / C;
    A = A % C;
    BB = B / C;
    if (BB == AA)
    {
        if (A % C == 0)
            cout << AA * C;
        else
            cout << -1;
    }
    else
        cout << (AA + 1) * C;
    return 0;
}