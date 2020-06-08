#include <iostream>
using namespace std;
int a, b, t;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (max(a, b) % min(a, b) == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}