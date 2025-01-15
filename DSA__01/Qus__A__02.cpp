#include <bits/stdc++.h>
using namespace std;


int arr2[1000] = {0};
bool compare(int a, int b)
{
    return arr2[a] > arr2[b];
}

int main()
{
    int arr[] = {4, 3, 1, 6, 1, 3, 4, 4};

    int n = sizeof(arr) / sizeof(arr[0]);

    // int arr2[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        arr2[arr[i]]++;
    }
    sort(arr, arr + n);

    sort(arr, arr + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}


