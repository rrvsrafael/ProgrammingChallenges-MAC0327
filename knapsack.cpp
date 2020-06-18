#include <iostream>
const int NMAX = 2e3 + 10;
using namespace std;

int v[NMAX], s[NMAX];

int knapsack(int S, int N)
{
    int i, wt;
    int K[N + 1][S + 1];
    for (i = 0; i <= N; i++)
    {
        for (wt = 0; wt <= S; wt++)
        {
            if (i == 0 || wt == 0)
                K[i][wt] = 0;
            else if (s[i - 1] <= wt)
                K[i][wt] = max(v[i - 1] + K[i - 1][wt - s[i - 1]], K[i - 1][wt]);
            else
                K[i][wt] = K[i - 1][wt];
        }
    }
    return K[N][S];
}

int main()
{
    int N, S;
    cin >> S >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> s[i];
        cin >> v[i];
    }
    cout << knapsack(S, N) << endl;
    return 0;
}