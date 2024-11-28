#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
        {
            count++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            int check = a[i];
            int k = 1;
            for (int j = i + 1; j < n && k <= check; j++)                 
            {

                if (a[j] < 0 )
                {
                    count--;
                    k++;
                    a[j]++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}