#include <iostream>
using namespace std;
const int MAXK = 110;
const int INF = 1e7;
//int N, K, v[]

int knapsack(int w, int v[], int n)
{
    int qtd, peso, item, minv[n + 1][w + 1];

    for (qtd = 0; qtd <= n; qtd++)
        for (peso = 0; peso <= w; peso++)
            minv[qtd][peso] = INF;

    for (peso = 0; peso <= w; peso++)
        minv[1][peso] = v[peso];

    for (qtd = 1; qtd <= n; qtd++)
    {
        for (peso = 1; peso <= w; peso++)
        {
            for (item = 1; item <= w; item++)
            {
                if (peso >= item)
                    if (minv[qtd - 1][peso - item] + v[item] < minv[qtd][peso])
                        minv[qtd][peso] = minv[qtd - 1][peso - item] + v[item];
            }
        }
    }

    int menor = INF;

    for (qtd = 1; qtd <= n; qtd++)
        if (minv[qtd][w] < menor)
            menor = minv[qtd][w];

    return menor;
}

int c, w, n, k[MAXK];

int main()
{
    cin >> c;
    k[0] = INF;
    while (c--)
    {
        cin >> n >> w;
        for (int i = 1; i <= w; i++)
        {
            cin >> k[i];
            if (k[i] == -1)
                k[i] = INF;
        }
        int ret = knapsack(w, k, n);
        cout << (ret == INF ? -1 : ret) << endl;
    }
    return 0;
}