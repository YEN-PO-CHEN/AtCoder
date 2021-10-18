#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<double> A(N, 0);
    vector<double> B(N, 0);
    double second = 0.0;
    for (int i{0}; i < N; i++)
    {
        cin >> A[i] >> B[i];
        second += A[i] / B[i];
    }
    second /= 2;
    double leng = 0.0;
    int j = 0;
    while (second > 0)
    {
        if (second >= A[j] / B[j])
            leng += A[j];
        else
        {
            leng += second * B[j];
            break;
        }
        second -= A[j] / B[j];
        ++j;
    }
    cout << leng << endl;
}