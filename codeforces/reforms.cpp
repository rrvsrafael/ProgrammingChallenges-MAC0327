#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 112345;
int n, x, t, vetor[MAX], i;
long long int soma;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        soma = 0;
        for (i = 0; i < n; i++)
        {
            cin >> vetor[i];
        }
        sort(vetor, vetor + n);
        for (i = n - 1; i >= 0; i--)
        {
            soma += vetor[i];
            if ((soma / (n - i)) < x)
                break;
        }

        cout << n - 1 - i << endl;
    }
    return 0;
}