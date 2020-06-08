#include <iostream>
using namespace std;
typedef long long int lli;
const lli MAXN = 5e9;

bool palynd(lli n)
{
    if (n < 10)
        return true;
    lli div = 10;
    while (div <= n)
        div *= 10;
    div /= 10;
    lli lastdig = n % 10;
    if (lastdig == n / div && palynd((n % div) / 10))
        return true;
    return false;
}

lli reverse(lli n)
{
    lli m = n;
    lli ret = m % 10;
    while (m >= 10)
    {
        ret *= 10;
        m /= 10;
        ret += m % 10;
    }
    return ret;
}

lli n, t;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < 1001; i++)
        {
            if (palynd(n))
            {
                cout << i << " " << n << endl;
                break;
            }
            n += reverse(n);
        }
    }
    return 0;
}