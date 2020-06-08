#include <iostream>
using namespace std;

int main()
{
    int T, a, b;
    cin >> T;
    while (T--)
    {
        cin >> a >> b;
        if (a != (a + b) / 2 && b != (a + b) / 2)
        {
            cout << (a + b) / 2 << " " << a + b - (a + b) / 2 << "\n";
        }
        else
        {
            cout << "Ok\n";
        }
    }
    return 0;
}