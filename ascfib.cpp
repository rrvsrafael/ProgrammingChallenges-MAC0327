#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
const int MAX = 1e6 + 1e5 + 10;
const int DIV = 1e5;
const int MAXPRINT = 1e2;

int A, B, T, u;

pair<int, int> fib[MAX];

int main()
{
    cin >> T;

    fib[1] = make_pair(0, 1);
    fib[2] = make_pair(1, 2);
    for (int i = 3; i < MAX; i++)
        fib[i] = make_pair((fib[i - 1].first + fib[i - 2].first) % DIV, i);

    sort(fib, fib + MAX);

    for (int t = 1; t <= T; t++)
    {
        cin >> A >> B;

        cout << "Case " << t << ": ";

        int i = 0, k = 0;

        while (k < MAXPRINT && k <= B)
        {
            if (fib[i].second >= A && fib[i].second <= A + B)
            {
                cout << fib[i].first << " ";
                k++;
            }
            i++;
        }

        cout << endl;
    }
    return 0;
}