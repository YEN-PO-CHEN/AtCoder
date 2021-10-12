// C - Swiss-System Tournament
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
struct dat
{
    string c;
    int rank = 0;
    int who;
};
bool cmp(dat l, dat r)
{
    if (l.rank > r.rank)
        return true;
    return false;
}
int main()
{
    int N, M;
    cin >> N >> M;
    dat Table[2 * N];
    for (auto i = 0; i < 2 * N; ++i)
    {
        cin >> Table[i].c;
        Table[i].who = i + 1;
    }
    for (int j = 0; j < 2 * N; j++)
    {
        for (int k = j + 1; k < 2 * N; ++k)
        {
            int count = k - 1;
            cout << count << endl;
            if (Table[j].c[count] == 'G' && Table[k].c[count] == 'C')
            {
                ++Table[j].rank;
            }
            if (Table[j].c[count] == 'C' && Table[k].c[count] == 'P') //G Rock, C scissors, P paper
            {
                ++Table[j].rank;
            }
            if (Table[j].c[count] == 'P' && Table[k].c[count] == 'G') //G Rock, C scissors, P paper
            {
                ++Table[j].rank;
            }
            if (Table[j].c[count] == 'G' && Table[k].c[count] == 'P') //G Rock, C scissors, P paper
            {
                ++Table[k].rank;
            }
            if (Table[j].c[count] == 'P' && Table[k].c[count] == 'C') //G Rock, C scissors, P paper
            {
                ++Table[k].rank;
            }
            if (Table[j].c[count] == 'C' && Table[k].c[count] == 'G') //G Rock, C scissors, P paper
            {
                ++Table[k].rank;
            }
        }
    }
    sort(Table, Table + 2 * N, cmp);
    for (auto i = 0; i < 2 * N; ++i)
    {
        if (i != 2 * N - 1)
            cout << Table[i].who << "\n";
        else
            cout << Table[i].who;
    }
    return 0;
}