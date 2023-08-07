#include <bits/stdc++.h>
using namespace std;
#define debug(args...) fprintf(stderr, agrs...);

char c[20];
int i, j;

int main()
{
    cin >> c;
    for (i = 0; i < 19; i++)
    {

        if (c[i] == '4' || c[i] == '7')
        {
            j++;
        }
    }
    if (j == 4 || j == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}