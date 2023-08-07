#include <iostream>
#include <stack>
const int MAXX = 112345;

using namespace std;

int t, vetor[MAXX], n;

int longestSubSeq(int subArr[], int n)
{
    int length[n] = {0}, lis = 0;
    length[0] = 1;
    for (int k = 0; k < n; k++)
    {
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (subArr[(j + k) % n] < subArr[(i + k) % n] && length[(j + k) % n] > length[(i + k) % n])
                    length[(i + k) % n] = length[(j + k) % n];
            }
            length[(i + k % n)]++;
        }
    }
    for (int i = 0; i < n; i++)
        lis = max(lis, length[i]);
    return lis;
}

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> vetor[i];
        }
        cout << longestSubSeq(vetor, n)
             << "\n\n";
    }
    return 0;
}