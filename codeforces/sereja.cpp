#include <bits/stdc++.h>
#define debug(args...) fprintf(stderr, args...)
using namespace std;

const int MAXX = 1123;

int vetor[MAXX], N, i, j, s, d, p;

int main()
{
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> vetor[i];
    }

    i = 0;
    j = N - 1;
    for (p = 0; p < N; p++)
    {
        if (vetor[i] > vetor[j])
        {
            if (p % 2)
            {
                d += vetor[i];
            }
            else
            {
                s += vetor[i];
            }
            i++;
        }
        else
        {
            if (p % 2)
            {
                d += vetor[j];
            }
            else
            {
                s += vetor[j];
            }
            j--;
        }
    }

    cout << s << " " << d;

    return 0;
}