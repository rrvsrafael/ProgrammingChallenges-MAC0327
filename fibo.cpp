#include <iostream>
const int MAXX = 1123456789;
using namespace std;

int penultimo = 0, ultimo = 1, atual = 1, n, i;

int main()
{
    cin >> n;
    if (n == 0)
    {
        cout << "0 0 0";
        return 0;
    }
    while (atual < n)
    {
        penultimo = ultimo;
        ultimo = atual;
        atual = penultimo + ultimo;
    }
    if (atual == n)
    {
        cout << "0 " << penultimo << " " << ultimo;
    }
    else
    {
        cout << "I'm too stupid to solve this problem";
    }
    return 0;
}