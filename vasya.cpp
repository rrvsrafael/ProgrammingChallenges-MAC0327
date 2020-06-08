#include <bits/stdc++.h>
using namespace std;
const int MAXX = 1123;
int i, j, v, ehprimo[MAXX], perguntas[MAXX], N;

int pot(int x, int y)
{
    int ret = 1;
    while (y--)
    {
        ret = ret * x;
    }
    return ret;
}

int main()
{
    for (i = 2; i < MAXX; i++)
    {
        ehprimo[i] = 1;
    }

    for (i = 2; i < sqrt(MAXX); i++)
    {
        if (ehprimo[i])
        {
            for (j = i * i; j < MAXX; j = j + i)
                ehprimo[j] = 0;
        }
    }
    cin >> N;
    for (i = 2; i <= N; i++)
    {
        if (ehprimo[i])
        {
            v = i;
            for (j = 2; v <= N; j++)
            {
                perguntas[v] = 1;
                v = pot(i, j);
            }
        }
    }
    v = 0;
    for (i = 2; i <= N; i++)
    {
        v += perguntas[i];
    }

    cout << v << "\n";
    for (i = 2; i <= N; i++)
    {
        if (perguntas[i])
            cout << i << " ";
    }
    return 0;
}