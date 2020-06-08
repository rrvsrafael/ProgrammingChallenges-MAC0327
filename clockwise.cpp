#include <bits/stdc++.h>
using namespace std;
const int MAXM = 1e9 + 7;
const int MAXN = 1e7 + 7;
const int MAXQ = 1e4 + 7;
typedef long long int lli;
const lli circ = 360e18;

int p;
lli barriers[MAXN];
lli n, m, q;
lli ai, af, bi, bf;

int main()
{
    cin >> n >> m >> q;

    for (int i = MAXM; i > 1; i--)
    {
        if (i <= n && i <= m && n % i == 0 && m % i == 0)
        {
            barriers[p++] = circ / i;
        }
    }

    while (q--)
    {
        cin >> ai >> bi >> af >> bf;
    }
}

12 20

    2 4
