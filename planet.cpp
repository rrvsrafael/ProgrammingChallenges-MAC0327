#include <bits/stdc++.h>
const int MAX = 51234;
int T, N, M, P, V, C;

using namespace std;

pair<int, int> planetas[MAX];

unordered_set<int> adj[MAX];

int main(){
    int a, b;
    cin >> T;
    while(T--){
        cin >> N;
        for(size_t i = 1; i <= N; i++)
        {
            cin >> P;
            planetas[i] = {P, i};
        }

        sort(planetas + 1, planetas + N + 1);

        for(size_t i = 1; i < N; i++)
        {
            cin >> a >> b;
            adj[a].insert(b);
            adj[b].insert(a);
        }
        for(size_t i = 1; i <= N; i++)
        {
            for(size_t j = N; j >= 1; j--)
            {
                if(adj[i].find(planetas[j].second)==adj[i].end() && planetas[j].second != i){
                    cout << planetas[j].second << " ";
                    break;
                }
            }
            
        }
        
    }
    return 0;
}