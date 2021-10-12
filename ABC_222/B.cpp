#include <iostream>
#include <string>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    int temp = 0;
    int count = 0;
    for (auto i = 0; i < A; ++i)
    {
        cin >> temp;
        if (temp < B)
            ++count;
    }
    cout << count;
    return 0;
}
