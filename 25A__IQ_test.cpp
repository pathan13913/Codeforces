#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int evennessIdx = 0;

    for (int i = 1; i < n - 1; i++)
    {
        int a = arr[i - 1] % 2;
        int b = arr[i] % 2;
        int c = arr[i + 1] % 2;

        if (a == b && b == c)
            continue;

        if (a == b)
            evennessIdx = i + 1;
        else if (b == c)
            evennessIdx = i - 1;
        else
            evennessIdx = i;
    }
    cout << evennessIdx + 1 << endl;

    return 0;
}