#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string left(string s)
{
    char a = s[0];
    int i;
    for (i = 1; i < s.length(); ++i)
    {
        s[i - 1] = s[i];
    }
    s[s.length() - 1] = a;
    return s;
}
int main()
{
    string s;
    cin >> s;
    string min = s;
    string max = s;
    for (auto i{0}; i < s.length(); ++i)
    {
        s = left(s);
        if (min > s)
            min = s;
        if (max < s)
            max = s;
    }
    cout << min << "\n";
    cout << max;
    return 0;
}