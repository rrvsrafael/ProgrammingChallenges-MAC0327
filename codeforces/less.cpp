#include <cstdio>
#include <algorithm>
#include <iostream>
const int MAXX = 212345;

using namespace std;

int main()
{
    int n, k, vetor[MAXX], i;
    vetor[0] = 1;
    bool existe = true;

    scanf("%d%d", &n, &k);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    sort(vetor, vetor + n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }

    if (k > n)
    {
        existe = false;
    }

    if (vetor[k - 1] == vetor[k])
    {
        existe = false;
    }

    if (k == 0)
    {
        existe = false;
    }

    if (existe)
    {
        printf("%d\n", vetor[k] - 1);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}