#include <iostream>
using namespace std;

bool matriz[8][8];
int a1, a2, b1, b2, r, i, j;
char c, d;

int main()
{
    cin >> c >> d;
    a1 = c - 'a';
    b1 = d - '1';
    matriz[a1][b1] = true;

    cin >> c >> d;
    a2 = c - 'a';
    b2 = d - '1';
    matriz[a2][b2] = true;

    for (i = 0; i < 8; i++)
        matriz[i][b1] = true;
    for (i = 0; i < 8; i++)
        matriz[a1][i] = true;

    int k[][2] = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {-1, 2}, {1, -2}, {-1, -2}};

    for (i = 0; i < 8; i++)
    {
        int p = a1 + k[i][0];
        int q = b1 + k[i][1];
        if (p >= 0 && q >= 0 && p < 8 && q < 8)
        {
            matriz[p][q] = true;
        }
    }

    for (i = 0; i < 8; i++)
    {
        int p = a2 + k[i][0];
        int q = b2 + k[i][1];
        if (p >= 0 && q >= 0 && p < 8 && q < 8)
        {
            matriz[p][q] = true;
        }
    }

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            r += (matriz[i][j]) ? 0 : 1;
        }
        cout << endl;
    }

    cout << r << endl;

    return 0;
}