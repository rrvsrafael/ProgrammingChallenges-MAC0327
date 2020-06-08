#include <iostream>
using namespace std;
int MAX = 4e3 + 10;

int maxAmount(int a, int b, int c, int w)
{
    int table[MAX];

    for (int i = 0; i < MAX; i++)
        table[i] = 0;

    table[a] = 1;
    table[b] = 1;
    table[c] = 1;

    for (int i = 0; i <= w; i++)
    {
        int prev;

        if (a <= i)
        {
            prev = table[i - a];
            if (prev != 0 && prev + 1 > table[i])
                table[i] = prev + 1;
        }

        if (b <= i)
        {
            prev = table[i - b];
            if (prev != 0 && prev + 1 > table[i])
                table[i] = prev + 1;
        }

        if (c <= i)
        {
            prev = table[i - c];
            if (prev != 0 && prev + 1 > table[i])
                table[i] = prev + 1;
        }
    }

    return table[w];
}

int n, a, b, c;

int main()
{
    cin >> n >> a >> b >> c;
    cout << maxAmount(a, b, c, n);
    return 0;
}