#include <bits/stdc++.h>
using namespace std;

string countAndSay(int A)
{
    string s1 = "1", s2 = "1";
    int qtd;
    char c;
    for (int i = 1; i < A; i++)
    {
        s2 = "";
        for (size_t p = 0; p < s1.size(); p++)
        {
            qtd = 1;
            while (p + 1 < s1.size())
            {
                if (s1[p] == s1[p + 1])
                {
                    p++;
                    qtd++;
                }
                else
                {
                    break;
                }
            }
            c = qtd + '0';
            s2 += c;
            s2 += s1[p];
        }
        s1 = s2;
    }
    return s2;
}

// 11 -> 21
// 21 -> 1211
// 1 -> 11 -> 21 -> 1211 -> 111221 -> 312211
