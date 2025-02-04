#include <bits/stdc++.h>
#include <numeric>
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
        int l, r;
        cin >> l >> r;
        if (l * 2 <= r)
        cout<<l <<" "<< l * 2 << endl;
        else
            cout << -1<<" "<<-1 << endl;
    }
    return 0;
}