#include <iostream>
using namespace std;
int MAX = 2e3 + 10;

int maxAmount(int *v, int n)
{
    int l = 0;
    int r = n - 1;
    int total = 0;
    int table[MAX][2];

    for (int i = 0; i < MAX; i++)
        table[i][0] = table[i][1] = 0;

    table[0][0] = v[l];
    table[0][1] = v[r];

    for (int i = 1; i <= n; i++)
    {
        l = i;
        r = n - 1 - i;
        for (int j = 1; j <= i; j++)
        {
            if (table[j - 1][0] + j * v[l] > table[j - 1][1] + j * v[r])
            {
                table[j][0] = table[j - 1][0] + j * v[l];
                l++;
            }
            else
            {
                table[j][1] = table[j - 1][1] + j * v[r];
                r--;
            }
        }
    }
    return max(table[n][0], table[n][1]);
}

int n, a, b, c;

int main()
{
    cin >> n >> a >> b >> c;
    cout << maxAmount(a, b, c, n);
    return 0;
}