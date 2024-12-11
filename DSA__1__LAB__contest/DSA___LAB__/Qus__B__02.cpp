#include <bits/stdc++.h>
using namespace std;
bool sortByAbsoluteValue(int a, int b)
{
    return abs(a) < abs(b);
}

int main()
{

    int arr[] = {-10, 5, -3, 7, -2};
    int size = 5;


    sort(arr, arr + size, sortByAbsoluteValue);

    cout << "Sorted array by absolute value: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}