#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int a[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }

    int sum1 = 0, sum2 = 0;
    int i = 0, j = t - 1;
    int flag = 1;

    while (1)
    {
        if (i > j)
            break;

        if (flag == 1)
        {
            if (a[i] > a[j])
            {
                sum1 += a[i];
                i++;
                flag = 0;
            }
            else
            {
                sum1 += a[j];
                j--;
                flag = 0;
            }
        }
        else
        {
            if (a[i] > a[j])
            {
                sum2 += a[i];
                i++;
                flag = 1;
            }
            else
            {
                sum2 += a[j];
                j--;
                flag = 1;
            }
        }
    }

    cout << sum1 << " " << sum2 << endl;

    return 0;
}
