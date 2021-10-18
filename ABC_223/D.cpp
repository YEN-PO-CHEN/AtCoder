#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    vector<double> A(M, 0);
    vector<double> B(M, 0);
    double second = 0.0;
    for (int i{0}; i < N; i++)
        cin >> A.at(i) >> B.at(i);
}