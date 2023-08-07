#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'balancedSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int balancedSum(vector<int> arr)
{
    int i = 0, j = arr.size() - 1;
    int sum_r = 0, sum_l = 0;
    while (i != j)
    {
        if (sum_r < sum_l)
        {
            sum_r += arr[j];
            j--;
        }
        else
        {
            sum_l += arr[i];
            i++;
        }
    }
    return i;
}

int main()