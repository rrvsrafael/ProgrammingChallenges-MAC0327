#include <iostream>
#include <cstdio>
const int MAXX = 3000;
using namespace std;

int main()
{
    char entrada[MAXX], pontas[MAXX], meio[MAXX], saida[MAXX];
    int n, k, i, j, a, b, c, d;
    cin >> n >> k;
    for (i = 0; i < n; i++)
    {
        scanf(" %c", &entrada[i]);
    }
    for (i = 0; entrada[i] == entrada[i + n - 1]; i++)
    {
        pontas[i] = entrada[i];
    }
    a = i;
    for (j = 0; (i + j) < (n - i); j++)
    {
        meio[j] = entrada[i + j];
    }
    b = j;
    while (k--)
    {
        for (i = 0; i < a; i++)
        {
            printf(pontas)
        }
    }

    return 0;
}