#include <iostream>
#include <string>
#include <stack>
using namespace std;
const int MAXN = 1123;

stack<int> pilha;
string s;
int t;
bool consegue;

int main()
{
    cin >> t;
    while (t--)
    {
        consegue = true;
        cin >> s;
        for (int i = 0; s[i]; i++)
        {
            switch (s[i])
            {
            case '{':
                pilha.push(1);
                break;

            case '[':
                pilha.push(2);
                break;

            case '(':
                pilha.push(3);
                break;

            case ')':
                if (!pilha.empty() && pilha.top() == 3)
                    pilha.pop();
                else
                    consegue = false;
                break;

            case ']':
                if (!pilha.empty() && pilha.top() == 2)
                    pilha.pop();
                else
                    consegue = false;
                break;

            case '}':
                if (!pilha.empty() && pilha.top() == 1)
                    pilha.pop();
                else
                    consegue = false;
                break;
            }
        }
        cout << (consegue ? "YES" : "NO") << endl;

        while (!pilha.empty())
            pilha.pop();
    }
    return 0;
}