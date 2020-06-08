#include <iostream>
using namespace std;

int vetor[110], a, b, n, r;

int main()
{
    cin >> n;
    for (int i = 1; i < n; i++)
        cin >> vetor[i];

    cin >> a >> b;
    for (int i = a; i < b; i++)
        r += vetor[i];

    cout << r << endl;
    return 0;
}