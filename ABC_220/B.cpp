// B - Base K
#include <iostream>
using namespace std;
long long count(int K, string C)
{
    long long re = 0;
    for (auto str : C)
    {
        re *= K; // key point !!
        re += (str - '0');
    }
    return re;
}
int main()
{
    int K;
    string A, B;
    cin >> K >> A >> B;
    cout << count(K, A) * count(K, B);
    return 0;
}