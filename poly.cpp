#include <bits/stdc++.h>
const int MAX = 1123456;
using namespace std;

int N, M, Q;

unordered_set<int> adj[MAX];

int threads[MAX][2];

bool visitados[MAX];

int achou, componentes;

void dfs(int node, int procurado){
    if (visitados[node])
        return;
    visitados[node] = true;
    if(adj[node].find(procurado)!=adj[node].end()){
        achou = 1;
        return;
    }
    for (auto i = adj[node].begin(); i != adj[node].end(); i++){
        dfs(*i, procurado);
    }
    return;
}

void cortaeprocura(int node1, int node2){
    adj[node1].erase(node2);
    adj[node2].erase(node1);
    memset(visitados, 0, MAX);
    achou = 0;
    dfs(node1, node2);
}

int main(){
    cin >> N >> M;
    int a, b, c;
    for(size_t i = 1; i <= M; i++){
        cin >> a >> b;
        adj[a].insert(b);
        adj[b].insert(a);
        threads[i][0] = a;
        threads[i][1] = b;
    }
    componentes = 0;

    for(size_t i = 1; i <= N; i++)
    {
        if(!visitados[i])
            componentes++;
        dfs(i, 0);
    }

    cin >> Q;

    for(size_t i = 1; i <=Q; i++){
        cin >> c;
        cortaeprocura(threads[c][0], threads[c][1]);
        if(!achou)
            componentes++;
        cout << componentes << " ";
    }

    return 0;
}