#include <iostream>
using namespace std;

int n, m, i, j, count1, count0, aux;

int main()
{
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> aux;
            if (aux)
            {
                count1++;
            }
            else
            {
                count0++;
            }
        }
    }
    if (count1 != 0)
        aux = 1;
    else
        aux = 0;

    for (i = 1; i < count1; i++)
    {
        aux = aux * 2;
    }
    count1 = aux;

    if (count0 != 0)
        aux = 1;
    else
        aux = 0;

    for (i = 1; i < count0; i++)
    {
        aux = aux * 2;
    }
    count0 = aux;
    cout << count1 + count0;
    return 0;
}