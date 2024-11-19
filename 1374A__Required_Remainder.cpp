#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int x, y, n;
        cin >> x >> y >> n;

        if (n % x == y)
        {
            cout << n << endl;
        }
        else
        {
            int r = n % x;

            if (r > y)
            {
                int d = r - y;
                n -= d;
                cout << n << endl;
            }
            else
            {
                int d = x - y;
                n = n - r - d;
                cout << n << endl;
            }
        }
    }
    return 0;
}