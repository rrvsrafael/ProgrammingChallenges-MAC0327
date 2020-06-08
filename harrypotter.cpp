#include <iostream>
#include <cstdio>
using namespace std;
const int MAX = 110;
const int INF = 0x3f3f3f3f;

int dp(int *mix, int n)
{
    int table[MAX][MAX];
    int i, j, k;

    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            table[i][j] = INF;
        }
    }

    for (int i = 0; i < n; i++)
    {
        table[0][i] = mix[i];
    }

    int total = 0;
    int atual = INF;

    for (int k = n; k > 0; k--)
    {
        for (int i = 1; i < k; i++)
        {
            atual = INF;
            for (int j = 0; j < k - i; j++)
            {
                int x = table[i][j];
                int a = table[i - 1][j];
                int b = table[i - 1][j + 1];
                if ((a + b) % 100 * x < x)
                {
                    table[i][j] =
                }
            }
            total += atual;
        }
    }
}

int t, n, mix[MAX], fumaca, menor, a, b;

int main()
{
    while (scanf("%d", &n))
    {
        fumaca = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> mix[i];
        }

        cout << fumaca << endl;
    }

    return 0;
}