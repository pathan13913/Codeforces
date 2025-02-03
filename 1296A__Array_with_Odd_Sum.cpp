#include <bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0, odd_count = 0, even_count = 0;

        for (int i = 0; i < n; i++) 
        {
            int x;
            cin >> x;
            sum += x;
            if (x % 2 == 0)
                even_count++;
            else
                odd_count++;
        }

        if (sum % 2 == 1) 
            cout << "YES" << endl;
        else if (odd_count > 0 && even_count > 0) 
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
