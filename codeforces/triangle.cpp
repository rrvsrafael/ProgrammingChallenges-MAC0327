#include <iostream>
#include <algorithm>
using namespace std;

int v[4];
bool consegue;

int main()
{
    for (int i = 0; i < 4; i++)
        cin >> v[i];
    sort(v, v + 4);
    if (v[0] + v[1] > v[2] || v[1] + v[2] > v[3])
    {
        cout << "TRIANGLE" << endl;
    }
    else if (v[0] + v[1] == v[2] || v[1] + v[2] == v[3])
    {
        cout << "SEGMENT" << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}