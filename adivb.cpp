#include <iostream>
using namespace std;

int a, b, t;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a % b)
        {
            cout << b - a % b << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}