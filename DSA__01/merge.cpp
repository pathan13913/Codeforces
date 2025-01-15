#include <iostream>

using namespace std;

void merGe(int arr[], int low, int mid, int high)
{
    int n = (high - low + 1);
    int left[n / 2 + 1];
    int right[n / 2 + 1];
    int i = 0, j = low;
    while (j <= mid)
    {
        left[i] = arr[j];
        i++;
        j++;
    }
    left[i] = 10000;
    i = 0;
    j = mid + 1;
    while (j <= high)
    {
        right[i] = arr[j];
        i++;
        j++;
    }
    right[i] = 10000;
    i = 0;
    j = 0;
    for (int k = low; k <= high; k++)
    {
        if (left[i] < right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
    }
}

void mergeSort(int arr[], int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merGe(arr, low, mid, high);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)           // 1, 6, 4, 5, 2, 3
        cin >> arr[i];
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}