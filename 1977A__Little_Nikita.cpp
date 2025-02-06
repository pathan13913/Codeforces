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
        int n, m;
        cin >> n >> m;

        if (n < m)
            cout << "NO" << endl;
        else
        {
            if (n == m)
                cout << "YES" << endl;
            else
            {
                n = n - m;
                if (n % 2 == 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
    return 0;
}