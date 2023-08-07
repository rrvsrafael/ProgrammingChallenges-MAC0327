#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

string s;
string s2("Sussu");

int main()
{
    getline(cin, s);
    auto i = s.end();
    i--;
    size_t found = s.find(s2);
    if (*i == '?')
    {
        cout << "7\n";
    }
    else if (found != string::npos)
    {
        cout << "AI SUSSU!\n";
    }
    else
    {
        cout << "O cara é bom!\n";
    }
    return 0;
}