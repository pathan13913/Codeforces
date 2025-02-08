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
    int maxpass = 0;
    int pass = 0;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        pass += b - a;
        maxpass = max(pass, maxpass);
    }
    cout << maxpass << endl;

    return 0;
}