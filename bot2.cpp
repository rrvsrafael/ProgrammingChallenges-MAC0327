#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

string s;
string s2("Sussu");
bool susu = false;
char c;

int main()
{
    while (1)
    {
        cin >> s;
        if (s.compare(s2) == 0)
        {
            susu = true;
        }
        c = *(s.end() - 1);
        if (c == '!' || c == '?' || c == '.')
            break;
    }
    s.pop_back();
    if (s.compare(s2) == 0)
    {
        susu = true;
    }

    if (c == '?')
    {
        cout << "7\n";
    }
    else if (susu)
    {
        cout << "AI SUSSU!\n";
    }
    else
    {
        cout << "O cara é bom!\n";
    }
    return 0;
}