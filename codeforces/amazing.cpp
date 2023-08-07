#include <bits/stdc++.h>

using namespace std;

char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

bool isAmazingWord(char *&s)
{
    for (int i = 0; i < sizeof(vowels); i++)
    {
        if (s[0] == vowels[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    char *s;
    int n = 0;
    while (scanf("%s", s))
    {
        n += (isAmazingWord(s)) ? 1 : 0;
    }
    cout << n << endl;
}