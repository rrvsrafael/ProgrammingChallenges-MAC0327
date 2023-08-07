#include <bits/stdc++.h>
using namespace std;
const int MAXN = 112345;
int i, n;
double dist, atual, l;
double temlanterna[MAXN];

int main()
{
    cin >> n >> l;
    for (i = 0; i < n; i++)
    {
        cin >> temlanterna[i];
    }
    sort(temlanterna, temlanterna + n);
    dist = 2 * (temlanterna[0] - 0);
    for (i = 1; i < n; i++)
    {
        dist = max(dist, temlanterna[i] - temlanterna[i - 1]);
    }
    dist = max(dist, 2 * (l - temlanterna[n - 1]));
    cout.precision(9);
    cout << fixed << dist / 2;
    return 0;
}