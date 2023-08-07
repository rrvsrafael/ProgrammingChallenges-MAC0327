#include <iostream>
using namespace std;
typedef long double ld;
const ld precision = 1e-9;

ld a, b, c, d;
ld n, m;

int main()
{
    cin >> n >> m;
    while (n != m)
    {
        a = 0;
        b = 1;
        c = 1;
        d = 0;

        while (1)
        {
            if (abs((a + c) / (b + d) - (n / m)) < precision)
            {
                cout << endl;
                break;
            }
            else if ((a + c) / (b + d) < (n / m))
            {
                a = a + c;
                b = b + d;
                cout << "R";
            }
            else if ((a + c) / (b + d) > (n / m))
            {
                c = a + c;
                d = b + d;
                cout << "L";
            }
        }

        cin >> n >> m;
    }
}