#include <iostream>
#include <iomanip>
using namespace std;

long double valor1, valor2, area, areatotal;
long long int tempo1, tempo2;
int i, n;
int main()
{
    cin >> n;
    cin >> tempo1 >> valor1;
    for (i = 1; i < n; i++)
    {
        cin >> tempo2 >> valor2;
        area = (valor1 + valor2) * (tempo2 - tempo1);
        areatotal += area / 2;
        tempo1 = tempo2;
        valor1 = valor2;
    }
    areatotal /= 1000;
    cout << setprecision(9) << areatotal;
    return 0;
}
