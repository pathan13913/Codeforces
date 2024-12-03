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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int count = 0;
        int ans = 0;
        int flag = std::count(arr, arr + n, 0);
       
        for (int i = 1; i < n; i++)
        {

            if (arr[i - 1] == 0 && arr[i] == 0)
                count++;
            else
                count = 0;
            ans = max(ans, count);
        }
       
        if (flag == 0)
            cout << 0 << endl;
        else
            cout << ans + 1 << endl;
    }
    return 0;
}