#include <iostream>
#include <math.h>
using namespace std;
const int MAXN = 1123456;

int i, j, n, x, aux;
bool naoprimos[MAXN];

void eratostenes()
{
    for (i = 2; i * i < MAXN; i++)
    {
        if (naoprimos[i] == false)
        {
            for (j = i * i; j < MAXN; j += i)
                naoprimos[j] = true;
        }
    }
}

int main()
{
    eratostenes();
    cin >> n;
    while (n--)
    {
        cin >> x;
        aux = sqrt(x);
        if (aux * aux == x && naoprimos[aux] == false)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}