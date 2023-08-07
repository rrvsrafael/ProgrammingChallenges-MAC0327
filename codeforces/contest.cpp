#include <iostream>
const int MAXX = 112345;
using namespace std;

int tam, n, tammax, atual, menor;

int main()
{
    cin >> n;
    cin >> atual;
    menor = atual;
    cin >> atual;
    n -= 1;
    tammax = 1;
    tam = 1;
    while (n--)
    {
        if (atual <= 2 * menor)
        {
            tam++;
        }
        else
        {
            tam = 1;
            menor = atual;
        }
        if (tam > tammax)
        {
            tammax = tam;
        }
        if (n)
            cin >> atual;
    }
    cout << tammax;

    return 0;
}