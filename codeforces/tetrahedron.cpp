#include <iostream>
using namespace std;
const int MAX = 1000000007;
const int MAXN = 1e7 + 10;

int n, a[MAXN][4], i, j, k;

int main()
{
    cin >> n;
    a[0][0] = 1;
    for (i = 1; i < MAXN; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                if (j != k)
                    a[i][j] = (a[i][j] + a[i - 1][k]) % MAX;
            }
        }
    }
    cout << a[n][0] << endl;
    return 0;
}