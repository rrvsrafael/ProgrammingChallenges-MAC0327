#include <cstdio>
#include <iostream>
const int MAXN = 1e5 + 10;
const int MAXS = 1e7;
const int INF = 0x3f3f3f3f;
using namespace std;

int t, v[MAXN], q, l, r, menor, n, seg[MAXS];

void construct(int arr[], int segtree[], int low, int high, int pos)
{
    if (low >= high)
    {
        segtree[pos] = arr[low];
        return;
    }
    int mid = (low + high) / 2;
    construct(arr, segtree, low, mid, 2 * pos + 1);
    construct(arr, segtree, mid + 1, high, 2 * pos + 2);
    segtree[pos] = min(segtree[2 * pos + 1], segtree[2 * pos + 2]);
    //cout << segtree[pos] << " ";
}

int query(int segtree[], int low, int high, int qlow, int qhigh, int pos)
{
    //cout << "high " << high << " low " << low << endl;
    if (low >= qlow && high <= qhigh)
        return segtree[pos];
    if (low > qhigh || high < qlow)
        return INF;
    int mid = (low + high) / 2;
    return min(query(segtree, low, mid, qlow, qhigh, 2 * pos + 1), query(segtree, mid + 1, high, qlow, qhigh, 2 * pos + 2));
}

int main()
{
    scanf("%d", &t);
    for (int j = 1; j <= t; j++)
    {
        scanf("%d%d", &n, &q);
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &v[i]);
        }
        construct(v, seg, 1, n, 1);
        //cout << endl;
        for (int i = 1; i <= q; i++)
        {
            scanf("%d%d", &l, &r);
            //cout << l << " " << r << endl;
            if (i == 1)
                printf("Case %d:\n", j);
            printf("%d\n", query(seg, 1, n, l, r, 1));
        }
    }
    return 0;
}