#include <iostream>
#include <string>
#include <cstring>
using namespace std;
const int MAX = 5123;
string a;
long long int vetor[MAX];

int main()
{

    while (1)
    {
        getline(cin, a);
        if (a[0] == '0')
            return 0;

        vetor[0] = 1;

        for (int l = 1; l < a.length(); l++)
        {
            if ((a[l - 1] == '1' && a[l] != '0'))
            {
                vetor[l] = vetor[l - 1];
                vetor[l] += +(l > 1) ? vetor[l - 2] : 1;
            }
            else if ((a[l - 1] == '2' && (a[l] != '7' && a[l] != '8' && a[l] != '9' && a[l] != '0')))
            {
                vetor[l] = vetor[l - 1];
                vetor[l] += +(l > 1) ? vetor[l - 2] : 1;
            }
            else
            {
                vetor[l] = vetor[l - 1];
            }
        }
        cout << vetor[a.length() - 1] << endl;
    }
    return 0;
}