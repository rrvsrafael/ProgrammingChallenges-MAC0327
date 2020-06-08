#include <stack>
#include <queue>
#include <iostream>
using namespace std;

stack<int> pilha;
queue<int> entrada;
bool consegue;
int i, j, n, aux, T;

int main()
{
    cin >> T;
    while (T--)
    {
        consegue = true;
        cin >> n;
        for (i = 1; i <= n; i++)
        {
            cin >> aux;
            entrada.push(aux);
        }
        i = 1;
        while (!entrada.empty() || !pilha.empty())
        {
            if (!pilha.empty() && pilha.top() == i)
            {
                pilha.pop();
                i++;
                continue;
            }
            if (!entrada.empty() && entrada.front() == i)
            {
                entrada.pop();
                i++;
                continue;
            }
            if (!entrada.empty() && entrada.front() != i)
            {
                pilha.push(entrada.front());
                entrada.pop();
                continue;
            }
            if (entrada.empty() && !pilha.empty() && pilha.top() != i)
            {
                consegue = false;
                break;
            }
        }
        if (consegue)
            cout << "yes\n";
        else
            cout << "no\n";
        while (!entrada.empty())
        {
            entrada.pop();
        }
        while (!pilha.empty())
        {
            pilha.pop();
        }
    }
    return 0;
}