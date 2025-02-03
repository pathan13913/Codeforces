#include <bits/stdc++.h>
using namespace std;
int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int n;
    cin >> n;
    while (n--)
    {
        pair<int, int> a, b, c, d;
        cin >> a.first >> a.second >> b.first >> b.second >> c.first >> c.second >> d.first >> d.second;

        int x1 = a.first;
        int x2 = b.first;
        int x3 = c.first;
        int x4 = d.first;

        if (x1 != x2)
        {
            int x = abs(x1 - x2);
            cout << x * x << endl;
        }
        else if (x1 != x3)
        {
            int x = abs(x1 - x3);
            cout << x * x << endl;
        }
        else if (x1 != x4)
        {
            int x = abs(x1 - x4);
            cout << x * x << endl;
        }
    }
    return 0;
}