#include <stdio.h>
#include <iostream>
using namespace std;
const int MAXX = 1123;

int flips(int arr[], int n)
{
    int inversionCount = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                inversionCount++;
    }
    return inversionCount;
}

int arr[MAXX], N;

int main()
{

    while (scanf("%d", &N) != EOF)
    {
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        cout << "Minimum exchange operations : " << flips(arr, N) << "\n";
    }

    return 0;
}