#include <iostream>

using namespace std;
const int MAX_N = 1e4 + 7;

int m, n, t;

int DP[MAX_N];
bool OK[MAX_N];

int main()
{
    while (scanf("%d%d%d", &m, &n, &t) == 3)
    {
        OK[0] = true;
        for (int i = m; i <= t; i++)
            if (OK[i - m])
            {
                DP[i] = max(DP[i], DP[i - m] + 1);
                OK[i] = true;
            }
        for (int i = n; i <= t; i++)
            if (OK[i - n])
            {
                DP[i] = max(DP[i], DP[i - n] + 1);
                OK[i] = true;
            }
        int pos;
        for (pos = t; pos >= 0; pos--)
            if (DP[pos] > 0)
                break;
        if (pos == t)
            cout << DP[pos] << endl;
        else if (pos == -1)
            cout << 0 << t << endl;
        else
            cout << DP[pos] << t - pos << endl;
    }
    return 0;
}