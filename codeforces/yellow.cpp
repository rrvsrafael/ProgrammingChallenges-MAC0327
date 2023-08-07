#include <iostream>
using namespace std;

int a1, a2, k1, k2, n, minn, maxx;
int minn1, maxx2, maxx3;
double maxx1;

int main()
{
    cin >> a1 >> a2 >> k1 >> k2 >> n;
    minn1 = a1 * (k1 - 1) + a2 * (k2 - 1);
    if (minn1 > n)
    {
        minn = 0;
    }
    else
    {
        minn = n - minn1;
        if (minn > a1 + a2)
        {
            minn = a1 + a2;
            maxx = a1 + a2;
            cout << minn << maxx;
            return 0;
        }
    }

    if (k1 < k2)
    {
        maxx2 = ((n - n % k1) / k1);
        maxx2 = min(a1, maxx2);
        maxx3 = (((n - maxx2 * k1) - (n - maxx2 * k1) % k2) / k2);
        maxx3 = min(a2, maxx3);
    }
    else
    {
        maxx2 = ((n - n % k2) / k2);
        maxx2 = min(a2, maxx2);
        maxx3 = (((n - maxx2 * k2) - (n - maxx2 * k2) % k1) / k1);
        maxx3 = min(a1, maxx3);
    }
    maxx = min(a1 + a2, maxx2 + maxx3);

    cout << minn << " " << maxx;
    return 0;
}