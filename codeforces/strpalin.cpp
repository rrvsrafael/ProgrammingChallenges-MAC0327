#include <bits/stdc++.h>
using namespace std;

int solve(string A)
{
    int i, j;
    int last_i, last_j;
    for (i = 0, j = A.size() - 1; i <= j;)
    {
        last_i = i;
        last_j = j;
        while (A[i] == A[j] && i < j)
        {
            i++;
            j--;
        }
        if (i >= j)
            break;
        else
        {
            i = last_i;
            j = last_j - 1;
        }
        while (A[i] != A[j])
        {
            j--;
        }
    }
    if(i>j)
        return A.size()-2*i;
    return A.size()  - 2*i-1;
}
