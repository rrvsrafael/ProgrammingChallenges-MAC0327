#include <iostream>
#include <cstdio>

using namespace std;
const int MAXX = 212345;

int n, m, a, i, j, vetor[MAXX], restos[MAXX], distancias[MAXX], soma = 0;

int main()
{
    cin >> n >> m;
    a = n / m;

    for (i = 0; i < n; i++)
    {
        cin >> vetor[i];
        restos[vetor[i] % m]++;
        distancias[i] = vetor[i] % m;
    }
    for (i = 0; i < m; i++)
    {
        soma += abs(a - restos[i]);
    }
    cout << soma / 2;
    return 0;
}