#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int evenCount = 0;
        int oddCount = 0;
        int flag = 1;

        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }

        if (oddCount % 2 == 1 || n==1)
            flag = 0;


        if (flag)
            cout
                << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}