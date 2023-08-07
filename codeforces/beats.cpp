#include <bits/stdc++.h>
using namespace std;

int digits[10], i, n;
bool consegue = true;
char c = '0';

int main()
{
    cin >> n;
    for (i = 0; i < 16; i++)
    {
        scanf(" %c", &c);
        if (c != '.')
        {
            digits[c - 48]++;
        }
    }
    for (i = 1; i < 10; i++)
    {
        if (digits[i] > 2 * n)
            consegue = false;
    }
    if (consegue)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}