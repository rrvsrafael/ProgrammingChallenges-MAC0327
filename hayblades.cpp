#include <bits/stdc++.h>
using namespace std;
const int MAX = 112;

int i, d, n, cont, vetor[MAX], t;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> d;
        for (i = 0; i < n; i++)
        {
            cin >> vetor[i];
        }
        cont = vetor[0];
        for (i = 1; i < n; i++)
        {
            while (vetor[i] > 0 && d >= i)
            {
                cont++;
                vetor[i]--;
                d -= i;
            }
        }
        cout << cont << endl;
    }
    return 0;
}