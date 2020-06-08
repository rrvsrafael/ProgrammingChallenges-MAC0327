#include <iostream>
using namespace std;

int n, cont;
double x[1123], y[1123];

double a(double xa, double xb, double ya, double yb)
{
    double ret;
    ret = (yb - ya) / (xb - xa);
    return ret;
}

double b(double xa, double xb, double ya, double yb)
{
    double ret;
    ret = (ya + yb - a(xa, xb, ya, yb) * (xa + xb)) / 2;
    return ret;
}

bool c(double xa, double xb, double xc, double ya, double yb, double yc)
{
    double ret = a(xa, xc, ya, yc) * xb + b(xa, xc, ya, yc);
    if (ret - yb > 0)
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
    cout << cont - 2;
    return 0;
}