#include <iostream>
#include <cstdio>

using namespace std;
const int MAXX = 412345;

int n, k, i, j, m;
char st[MAXX], aux[200];

int main()
{
    cin >> n >> k;

    for (i = 0; i < n; i++)
    {
        scanf(" %c", &st[i]);
        aux[st[i]]++;
    }

    j = 'a';

    while (k > 0)
    {
        for (i = 0; i < n; i++)
        {
            if (st[i] == j)
            {
                st[i] = '{';
                k--;
                if (k == 0)
                    break;
            }
        }
        j++;
    }

    for (i = 0; i < n; i++)
    {
        if (st[i] != '{')
        {
            cout << st[i];
        }
    }
    cout << '\n';

    return 0;
}