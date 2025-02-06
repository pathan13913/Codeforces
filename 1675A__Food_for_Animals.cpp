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
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        if (a + c < x || b + c < y)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            if (x > a)
            {
                x -= a;
                if (x > c)
                {
                    cout << "NO" << endl;
                    continue;
                }
                c -= x;
            }
          
            if (y > b)
            {
                y -= b;
                if (y > c)
                {
                    cout << "NO" << endl;
                    continue;
                }
            }
           
            cout << "YES" << endl;
        }
    }
    return 0;
}


/*

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        x = max(0, x - a);  // If x > a, reduce x by a, else x = 0
        y = max(0, y - b);  // If y > b, reduce y by b, else y = 0

        if (x + y <= c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}



*/