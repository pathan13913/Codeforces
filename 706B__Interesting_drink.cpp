#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    n++;

    int arr[n];
    arr[0] = INT_MAX;
    for (int i = 1; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);

    int q;
    cin >> q;
    while (q--)
    {
        long long int t;
        cin >> t;
        int count = upper_bound(arr, arr + n, t) - arr;
        cout << count << endl;
    }
    return 0;
}