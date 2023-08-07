#include <iostream>

using namespace std;

char matriz[510][510];
int i, j, n, m;
bool consegue = true;

int main()
{
    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            cin >> matriz[i][j];
        }
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (matriz[i][j] == 'W')
            {
                if (matriz[i][j - 1] == 'S')
                {
                    consegue = false;
                }
                else
                {
                    if (matriz[i][j - 1] != 'W')
                        matriz[i][j - 1] = 'D';
                }
                if (matriz[i - 1][j] == 'S')
                {
                    consegue = false;
                }
                else
                {
                    if (matriz[i - 1][j] != 'W')
                        matriz[i - 1][j] = 'D';
                }
                if (matriz[i + 1][j] == 'S')
                {
                    consegue = false;
                }
                else
                {
                    if (matriz[i + 1][j] != 'W')
                        matriz[i + 1][j] = 'D';
                }
                if (matriz[i][j + 1] == 'S')
                {
                    consegue = false;
                }
                else
                {
                    if (matriz[i][j + 1] != 'W')
                        matriz[i][j + 1] = 'D';
                }
            }
        }
    }

    if (consegue)
    {
        cout << "Yes\n";
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= m; j++)
            {
                cout << matriz[i][j];
            }
            cout << "\n";
        }
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}