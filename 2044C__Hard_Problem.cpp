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
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int n1 = n;
        int n2 = n;

        int ans = 0;

        if (n1 <= a)
        {
            ans += n1;
            n1 = 0;
        }
        else
        {
            ans += a;
            n1 -= a;
        }

        if (n2 <= b)
        {
            ans += n2;
            n2 = 0;
        }
        else
        {
            ans += b;
            n2 -= b;
        }

        n = n1 + n2;

         if (n <= c)
            ans += n;
        else
            ans += c;


        cout << ans << endl;
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
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int usedA = min(n, a);
        int usedB = min(n, b);
        int remaining = 2*n - usedA - usedB;

        int ans = usedA + usedB + min(remaining, c);
        
        cout << ans << endl;
    }

    return 0;
}



*/