#include <iostream>
#include <string>
using namespace std;
int main()
{
    string c;
    cin >> c;
    for (auto i = c.length(); i < 4; ++i)
    {
        cout << "0";
    }
    cout << c;
    return 0;
}