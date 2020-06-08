#include <iostream>

using namespace std;

const int MINN = 0;
const int MAXX = 1000000001;

int ini, meio, fim, i;
char c = '>';

int main()
{
    ini = MINN;
    fim = MAXX;
    while (c != '=')
    {
        meio = (ini + fim) / 2;
        cout << "Q " << meio << "\n";
        cout.flush();
        cin >> c;
        if (c == '>')
        {
            ini = meio;
        }
        else
        {
            fim = meio + 1;
        }
    }
    return 0;
}