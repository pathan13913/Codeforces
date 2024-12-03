#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int maxx = max(a, max(b, c));
        int A = maxx-a;
        int B = maxx-b;
        int C = maxx-c;
        int sum = A + B + C;
        int find = n - sum;

        if (find%3 == 0 && find >= 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}