#include <iostream>
#include <queue>
using namespace std;

queue<int> k1, k2, k1i, k2i;

int N, K1, K2, i, j, n, aux[11];

bool repetiu = false;

int main()
{
    cin >> N;

    cin >> K1;
    for (i = 0; i < K1; i++)
    {
        cin >> n;
        k1.push(n);
        k1i.push(n);
    }

    cin >> K2;
    for (i = 0; i < K2; i++)
    {
        cin >> n;
        k2.push(n);
        k2i.push(n);
    }

    for (i = 0; !repetiu && !k1.empty() && !k2.empty() && i < 1000; i++)
    {
        if (k1.front() > k2.front())
        {
            k1.push(k2.front());
            k1.push(k1.front());
        }
        else
        {
            k2.push(k1.front());
            k2.push(k2.front());
        }

        k1.pop();
        k2.pop();

        if ((k1.size() == k1i.size() && k2.size() == k2i.size()) || (k1.size() == k2i.size() && k2.size() == k1i.size()))
        {
            if (k1.front() == k1i.front() && k2.front() == k2i.front() && k1.back() == k1i.back() && k2.back() == k2i.back())
            {
                repetiu = true;
                break;
            }
            else if (k1.front() == k2i.front() && k2.front() == k1i.front() && k1.back() == k2i.back() && k2.back() == k1i.back())
            {
                repetiu = true;
                break;
            }
        }
    }

    if (repetiu || i >= 1000)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << i << " " << (k2.empty() ? 1 : 2) << endl;
    }

    return 0;
}