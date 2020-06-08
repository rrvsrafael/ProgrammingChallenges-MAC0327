#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    long long int q, n, m, k, diagx, diagy, diagr;
    scanf("%lld", &q);
    while (q--)
    {
        diagx = 0;
        diagy = 0;
        scanf("%lld%lld%lld", &n, &m, &k);
        if (n > k || m > k)
        {
            printf("-1\n");
            continue;
        }
        diagx = n + ((k - n) / 2) * 2;
        diagy = m + ((k - m) / 2) * 2;

        printf("%lld\n", min(diagx - k + diagy, diagy - k + diagx));
    }
    return 0;
}