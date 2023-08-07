#include <bits/stdc++.h>
using namespace std;

vector<int> frequency(string s)
{
    vector<int> freq(26, 0);

    int pos = 0;
    int quantity = 0, letter = 0;

    while (pos < s.size())
    {
        if (s[pos] == '1' || s[pos] == '2') //may be 2 digits char
        {
            if (pos + 2 < s.size() && s[pos + 1] <= '6' && s[pos + 2] == '#') // confirms a 2 digit char
            {
                letter = (s[pos] - '0') * 10 + (s[pos + 1] - '1');
                pos += 3;
            }
            else
            {
                letter = s[pos] - '1';
                pos += 1;
            }
        }
        else
        {
            letter = s[pos] - '1';
            pos += 1;
        }

        if (pos < s.size() && s[pos] == '(') // confirms multiple occurence
        {
            quantity = 0;
            while (s[pos + 1] != ')')
            {
                quantity = quantity * 10 + (s[pos + 1] - '0');
                pos++;
            }
            pos += 2;
        }
        else
        {
            quantity = 1;
        }

        if (letter <= 26)
            freq[letter] += quantity;

        char l = 'a' + letter;

        while (quantity--)
            cout << l;
    }

    cout << endl;

    return freq;
}

int main()
{
    string s;
    cin >> s;
    vector<int> v = frequency(s);
    return 0;
}