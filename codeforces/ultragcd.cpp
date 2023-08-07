#include <iostream>
#include <string>
using namespace std;

string a, b;
int main()
{
    cin >> a >> b;
    if (a.compare(b) == 0)
    {
        cout << a << endl;
    }
    else
    {
        cout << "1" << endl;
    }
    return 0;
}