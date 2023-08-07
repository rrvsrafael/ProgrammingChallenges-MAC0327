#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;
const int MAXN = 5e2 + 10;
const int MAXF = 1e4 + 10;

int minAmount(int **coins, int n, int w)
{
    int table[w + 1];

    table[0] = 0;

    for (int i = 1; i <= w; i++)
        table[i] = INF;

    for (int i = 1; i <= w; i++)
    {
        for (int j = 0; j < n; j++)
            if (coins[j][0] <= i)
            {
                int left = table[i - coins[j][0]];
                if (left != INF && left + coins[j][1] < table[i])
                    table[i] = left + coins[j][1];
            }
    }
    return table[w];
}

int t, n, e, f, r;

int main()
{
    int **coins = new int *[MAXN];
    for (int i = 0; i < MAXN; i++)
    {
        coins[i] = new int[2];
    }
    cin >> t;
    while (t--)
    {
        cin >> e >> f;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> coins[i][1] >> coins[i][0];
        }
        r = minAmount(coins, n, f - e);
        if (r != INF)
        {
            cout << "The minimum amount of money in the piggy-bank is " << r << "." << endl;
        }
        else
        {
            cout << "This is impossible." << endl;
        }
    }
    return 0;
}