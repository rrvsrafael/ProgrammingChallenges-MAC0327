#include <bits/stdc++.h>

const int MAX = 2123;

using namespace std;

set <int> normal;

int main(int argc, char const *argv[]) {

    int n, k, vetor[MAX][2], soma=0;

    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        cin >> vetor[i][0];
        vetor[i][1] = i;
    }

    for (int i = 1; i<n; i++){
        for(int j = i; j<=n; j++){
            if(vetor[i][0]<vetor[j][0]){
                int a = vetor[i][0];
                int b = vetor[i][1];
                vetor[i][0] = vetor[j][0];
                vetor[i][1] = vetor[j][1];
                vetor[j][0] = a;
                vetor[j][1] = b;
            }
        }
    }

    normal.insert(1);

    for (int i = 1; i <= k; i++) {
        normal.insert(vetor[i][1]);
        soma += vetor[i][0];
    }

    normal.erase(normal.end());
    normal.insert(n+1);

    cout << soma << "\n";

    auto i = normal.begin();
    auto j = i;
    i++;

     while(i != normal.end()){
        cout << (*i) - (*j) << " ";
        j = i;
        i++;
    }



    return 0;
}
