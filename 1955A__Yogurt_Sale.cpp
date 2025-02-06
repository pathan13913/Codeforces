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
        int n, a, b;
        cin >> n >> a >> b;
        int ansa = 0;
        int ansb = 0;
        int oddEven = n % 2;

        ansa = n * a;

        if (oddEven == 1)
            ansb = (n - 1)/2 * b + a;
        else
            ansb = n/2 * b;

        if (ansa < ansb)
            cout << ansa << endl;
        else
            cout <<ansb << endl;
    }

    return 0;
}