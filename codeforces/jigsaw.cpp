#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 1e3 + 10;
const int INF = 2e9;

int n, m, v[MAX];
int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    sort(v, v + m);
    int minimo = INF;
    for (int i = 0; i <= m - n; i++)
    {
        if (v[n + i - 1] - v[i] < minimo)
            minimo = v[n + i - 1] - v[i];
    }
    cout << minimo << endl;
    return 0;
}
