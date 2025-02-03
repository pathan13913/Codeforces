#include <bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }
        if (sqrt(sum) == (int)sqrt(sum))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}