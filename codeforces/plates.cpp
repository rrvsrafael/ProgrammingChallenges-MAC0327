#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    double x;
    double y;
    double r;
} prato;
prato aux;

vector<prato> conjunto;

bool conflito(prato a, prato b)
{
    double ret;
    ret = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    if (ret < a.r + b.r)
    {
        return true;
    }
    return false;
}

int N, x, y, r;
char c;
bool consegue;

int main()
{
    cin >> N;
    while (N--)
    {
        cin >> c >> x >> y >> r;
        aux.r = r;
        aux.x = x;
        aux.y = y;
        if (c == 'A')
        {
            consegue = true;
            for (auto i = conjunto.begin(); i != conjunto.end(); i++)
            {
                if (conflito(aux, *i))
                {
                    consegue = false;
                }
            }
            if (consegue)
            {
                cout << "Ok\n";
                conjunto.push_back(aux);
            }
            else
            {
                cout << "No\n";
            }
        }
        else
        {
            consegue = false;
            auto j = conjunto.end();
            for (auto i = conjunto.begin(); i != conjunto.end(); i++)
            {
                if (aux.r == (*i).r && aux.x == (*i).x && aux.y == (*i).y)
                {
                    consegue = true;
                    j = i;
                    break;
                }
            }
            if (consegue)
            {
                cout << "Ok\n";
                conjunto.erase(j);
            }
            else
            {
                cout << "No\n";
            }
        }
    }
    return 0;
}
