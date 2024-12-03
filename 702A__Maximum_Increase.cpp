#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int count = 0;
    int findAns = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
            count++;
        else
            count = 0;
        findAns = max(findAns, count);
    }
    cout << findAns+1 << endl;

    return 0;
}