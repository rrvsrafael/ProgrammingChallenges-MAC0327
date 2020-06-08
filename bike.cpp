#include <iostream>
using namespace std;

int n, cont;
double x[1123], y[1123];

bool c(double xa, double xb, double xc, double ya, double yb, double yc)
{
    double ret = (xb - xa) * (yc - yb) - (xc - xb) * (yb - ya);
    if (ret > 0)
        return false;
    return true;
}

int main()
{
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i <= n - 2; i++)
    {
        if (c(x[i], x[i + 1], x[i + 2], y[i], y[i + 1], y[i + 2]))
            cont++;
    }
    cout << cont - 3;
    return 0;
}