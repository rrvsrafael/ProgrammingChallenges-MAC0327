#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    long long int r;
    cin >> r;
    if (r == 0)
    {
        cout << "0";
    }
    else if (r % 2 == 0)
    {
        cout << r + 1;
    }
    else
    {
        cout << (r + 1) / 2;
    }

    return 0;
}