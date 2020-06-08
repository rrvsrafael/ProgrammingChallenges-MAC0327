#include <iostream>
using namespace std;
const int MAX = 1e4 + 10;

long long int a[MAX], b[MAX];

int t, n;

int main()
{
    cin >> t;

    for (int c = 1; c <= t; c++)
    {
        cin >> n;

        long long int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = 0;
        }

        b[0] = a[0];
        b[1] = a[1];

        for (int i = 2; i < n; i++)
        {
            for (int j = 0; j < i - 1; j++)
            {
                if (b[j] + a[i] > b[i])
                    b[i] = b[j] + a[i];
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (b[i] > sum)
                sum = b[i];
        }

        cout << "Case " << c << ": " << sum << endl;
    }

    return 0;
}