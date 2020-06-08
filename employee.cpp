#include <iostream>
#include <set>

using namespace std;

set<int> superiores[2010];

int n, i, j, k, p, maximo;

int main()
{
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        superiores[i].insert(i);
    }

    for (i = 1; i <= n; i++)
    {
        cin >> p;

        if (p != -1)
        {
            superiores[p].insert(i);
        }
    }
    for (i = 0; i < k; i++)
    {
        j = superiores[i].size();

        if (j > maximo)
        {
            maximo = j;
        }

        for (auto l = superiores[i].begin(); l != superiores[i].end(); l++)
        {
            cout << (*l) << " ";
        }
        superiores[i].clear();
        cout << "\n";
    }

    cout << maximo;

    return 0;
}