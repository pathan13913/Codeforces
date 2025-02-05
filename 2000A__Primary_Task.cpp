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
        string s = to_string(n);
        int len = s.length();
        if (len < 3)
            cout << "NO" << endl;
        else if (len == 3 && s[2] == '1')
            cout << "NO" << endl;
        else
        {
            if (s[0] != '1' || s[1] != '0' || s[2] == '0')
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}