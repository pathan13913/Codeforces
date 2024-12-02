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

        int sumWeight = 0;
        int count1 = 0;
        int count2 = 0;
        int flag = 1;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sumWeight += a[i];
            if (a[i] == 1)
                count1++;
            else
                count2++;
        }

        if (sumWeight % 2 != 0)
            flag = 0;

        else
        {
            if (count1 == 0)
            {
                flag = count2 % 2 == 0 ? 1 : 0;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}