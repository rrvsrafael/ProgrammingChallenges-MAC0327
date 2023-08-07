#include <iostream>
#include <string>
#include <vector>
const int MAXT = 110;

using namespace std;

string password;
int qtd[MAXT];
int t, tblock;

int main()
{
    cin >> t >> tblock;

    for (int i = 0; i < t; i++)
    {
        cin >> password;
        qtd[password.length()]++;
    }

    cin >> password;

    int bestcase = 0, worstcase = 0;
    for (int i = 1; i <= password.length(); i++)
    {
        if (i != password.length())
            bestcase += qtd[i];
        else
        {
            bestcase++;
            break;
        }
    }
    for (int i = 1; i <= password.length(); i++)
    {
        if (i != password.length())
            worstcase += qtd[i];
        else
        {
            worstcase += qtd[i];
            break;
        }
    }
    cout << bestcase + 5 * ((bestcase - 1) / tblock) << " " << worstcase + 5 * ((worstcase - 1) / tblock) << endl;

    return 0;
}