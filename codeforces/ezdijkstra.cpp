#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
#define mp make_pair
const int MAX = 1e4 + 1;
const int INF = INT_MAX;

vector<pi> v[MAX];
bool vis[MAX];
int dist[MAX];

void dijkstra(int root)
{
    priority_queue<pi, vector<pi>, greater<pi>> pq;
    pq.push(mp(0, root));
    dist[root] = 0;
    while (!pq.empty())
    {
        pi p = pq.top();
        int u = p.second;
        pq.pop();
        if (vis[u])
        {
            continue;
        }
        vis[u] = true;
        for (int i = 0; i < v[u].size(); i++)
        {
            int V = v[u][i].first;
            int weight = v[u][i].second;
            if (dist[V] > dist[u] + weight)
            {
                dist[V] = dist[u] + weight;
                pq.push(mp(dist[V], V));
            }
        }
    }
}

int tc, n, m, a, b, c, root, desti;

int main()
{
    memset(v, false, sizeof(v));
    cin >> tc;
    while (tc--)
    {
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            vis[i] = false;
            dist[i] = INF;
            v[i].clear();
        }
        while (m--)
        {
            cin >> a >> b >> c;
            v[a].push_back(mp(b, c));
        }
        cin >> root >> desti;
        dijkstra(root);
        if (vis[desti])
            cout << dist[desti] << '\n';
        else
            cout << "NO" << '\n';
    }
}