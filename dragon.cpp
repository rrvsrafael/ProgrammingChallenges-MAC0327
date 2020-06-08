#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1123;
int i, n, x, y;
long long int s;

bool consegue = true;

pair<int, int> dragons[MAXN];

bool ok(pair<int, int> a, pair<int, int> b)
{
    if (a.first < b.first)
        return true;
    if (a.first == b.first && a.second > b.second)
        return true;
    return false;
}

int main()
{
    cin >> s >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x >> y;
        dragons[i] = make_pair(x, y);
    }
    sort(dragons, dragons + n, ok);
    for (i = 0; i < n; i++)
    {
        //cout << dragons[i].first << "\n";
        if (dragons[i].first >= s)
        {
            consegue = false;
            break;
        }
        s += dragons[i].second;
    }
    if (consegue)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}