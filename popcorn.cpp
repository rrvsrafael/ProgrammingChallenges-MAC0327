#include <iostream>

using namespace std;

long long int n;

int main()
{
    cin >> n;
    cout << n * (n + 1) / 2 - n + 1;
    return 0;
}