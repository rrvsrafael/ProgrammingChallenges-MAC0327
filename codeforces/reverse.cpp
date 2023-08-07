#include <iostream>
#include <cstdio>

using namespace std;
const int MAXX = 123;

int main()
{
    int divisores[MAXX], n, k, i, j = 0;
    char st[MAXX], aux;
    cin >> n;
    for (i = n; i > 0; i--)
    {
        if (n % i == 0)
        {
            divisores[j++] = i;
        }
    }
    for (i = 1; i <= n; i++)
    {
        cin >> st[i];
    }
    for (i = j - 1; i >= 0; i--)
    {
        for (k = 1; k <= divisores[i] / 2; k++)
        {
            aux = st[k];
            st[k] = st[divisores[i] - k + 1];
            st[divisores[i] - k + 1] = aux;
        }
    }
    for (i = 1; i <= n; i++)
    {
        cout << st[i];
    }
    return 0;
}