#include <iostream>

using namespace std;

int hardest[4] = {10001, 10001, 0, 10001}, easiest[4] = {10001, 0, 10001, 0}, l, a, b, c;

int main()
{
    cin >> l;
    for (int i = 1; i <= l; i++)
    {
        cin >> a >> b >> c;
        if (a > easiest[1])
        {
            easiest[0] = i;
            easiest[1] = a;
            easiest[2] = b;
            easiest[3] = c;
        }
        else if (a == easiest[1] && b < easiest[2])
        {
            easiest[0] = i;
            easiest[1] = a;
            easiest[2] = b;
            easiest[3] = c;
        }
        else if (a == easiest[1] && b == easiest[2] && c > easiest[3])
        {
            easiest[0] = i;
            easiest[1] = a;
            easiest[2] = b;
            easiest[3] = c;
        }
        if (a < hardest[1])
        {
            hardest[0] = i;
            hardest[1] = a;
            hardest[2] = b;
            hardest[3] = c;
        }
        else if (a == hardest[1] && b > hardest[2])
        {
            hardest[0] = i;
            hardest[1] = a;
            hardest[2] = b;
            hardest[3] = c;
        }
        else if (a == hardest[1] && b == hardest[2] && c < hardest[3])
        {
            hardest[0] = i;
            hardest[1] = a;
            hardest[2] = b;
            hardest[3] = c;
        }
    }

    if (hardest[0] == easiest[0])
    {
        cout << "Easiest and Hardest is level " << easiest[0];
        return 0;
    }
    cout << "Easiest is level " << easiest[0];
    cout << "\nHardest is level " << hardest[0];
    return 0;
}