#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int n, p, r = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        r += p;
    }
    if (r % 5)
    {
        cout << r / 5 + 1;
    }
    else
    {
        cout << r / 5;
    }

    return 0;
}