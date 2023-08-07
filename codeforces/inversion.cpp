#include <iostream>
using namespace std;
const int MAXX = 212345;

int merge(int arr[], int temp[], int left, int mid, int right)
{
    int i, j, k;
    int count = 0;
    i = left;
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            count += (mid - i);
        }
    }
    while (i <= mid - 1)
        temp[k++] = arr[i++];
    while (j <= right)
        temp[k++] = arr[j++];
    for (i = left; i <= right; i++)
        arr[i] = temp[i];
    return count;
}
int mergeSort(int arr[], int temp[], int left, int right)
{
    int mid, count = 0;
    if (right > left)
    {
        mid = (right + left) / 2;
        count = mergeSort(arr, temp, left, mid);
        count += mergeSort(arr, temp, mid + 1, right);
        count += merge(arr, temp, left, mid + 1, right);
    }
    return count;
}
int arrInversion(int arr[], int n)
{
    int temp[n];
    return mergeSort(arr, temp, 0, n - 1);
}
int main()
{
    int arr[MAXX], n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int a = 0; a < n; a++)
        {
            cin >> arr[a];
        }
        cout << arrInversion(arr, n) << '\n';
    }
    return 0;
}