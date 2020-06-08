#include <bits/stdc++.h>
using namespace std;
const int MAX = 112345;

set<int> subconj;

int i, n, k, cont, vetor[MAX];

int main()
{
    cin >> n >> k;
    for (i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }
    sort(vetor, vetor + n);
    for (i = 0; i < n; i++)
    {
        if (vetor[i] % k != 0)
        {
            subconj.insert(vetor[i]);
        }
        else
        {
            if (subconj.find(vetor[i] / k) == subconj.end())
            {
                subconj.insert(vetor[i]);
            }
        }
    }
    cont = subconj.size();
    cout << cont << endl;
    return 0;
}