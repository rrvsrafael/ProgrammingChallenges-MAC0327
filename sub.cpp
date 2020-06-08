#include <iostream>

using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;

    while (b--)
    {
        if (a % 10 == 0)
        {
            a = a / 10;
        }
        else
        {
            a--;
        }
    }

    cout << a;

    return 0;
}