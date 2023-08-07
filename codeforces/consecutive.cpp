#include <bits/stdc++.h>

using namespace std;

int main()
{
    string A, result;
    int B, lastdiff = 0;
    int count = 1;
    cin >> A >> B;
    for (int i = 1; i < A.size(); i++)
    {
        if (count == B)
        {
            lastdiff = i + 1;
            count = 1;
        }
        else
        {
            if (A.at(i) == A.at(i - 1))
            {
                count++;
            }
            else
            {
                result += A.substr(lastdiff, i);
                lastdiff = i + 1;
            }
        }
    }
    cout << result << endl;
    return 0;
}