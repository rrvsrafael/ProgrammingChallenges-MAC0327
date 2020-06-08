#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int n, procurado, i, a;
bool consegue;
stack<int> auxilio;
queue<int> entrada;

int main()
{
    cin >> n;
    while (n != 0)
    {
        consegue = true;
        procurado = 1;
        for (i = 1; i <= n; i++)
        {
            cin >> a;
            entrada.push(a);
        }

        while (!entrada.empty() || !auxilio.empty())
        {

            if (!entrada.empty() && entrada.front() == procurado)
            {
                entrada.pop();
                procurado++;
            }
            else
            {
                if (entrada.empty() && !auxilio.empty() && auxilio.top() != procurado)
                {
                    consegue = false;
                    break;
                }
                else if (!auxilio.empty() && auxilio.top() == procurado)
                {
                    auxilio.pop();
                    procurado++;
                }
                else
                {
                    auxilio.push(entrada.front());
                    entrada.pop();
                }
            }
        }

        if (consegue)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }

        while (!entrada.empty())
        {
            entrada.pop();
        }
        while (!auxilio.empty())
        {
            auxilio.pop();
        }

        cin >> n;
    }
    return 0;
}