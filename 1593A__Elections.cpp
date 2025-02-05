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
        int a, b, c;
        cin >> a >> b >> c;

        int maxVotes = max({a, b, c});

        int A = max(0, max(b, c) - a + 1);
        int B = max(0, max(a, c) - b + 1);
        int C = max(0, max(a, b) - c + 1);

        cout << A << " " << B << " " << C << endl;
    }
    return 0;
}