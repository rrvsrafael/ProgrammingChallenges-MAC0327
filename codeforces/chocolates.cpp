#include <iostream>

using namespace std;

int vetor[112345], i, a, b, c, d, n, v;

int main()
{
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> v;
        if (i % 4 == 1)
            a += v;
        else if (i % 4 == 2)
            b += v;
        else if (i % 4 == 3)
            c += v;
        else
            d += v;
    }
    v = max(a, (max(b, max(c, d))));
    if (v == a)
    {
        cout << "A\n";
    }
    else if (v == b)
    {
        cout << "B\n";
    }
    else if (v == c)
    {
        cout << "C\n";
    }
    else
    {
        cout << "D\n";
    }
    return 0;
}