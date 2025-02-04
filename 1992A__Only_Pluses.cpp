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
        priority_queue<int, vector<int>, greater<int>> q;
        q.push(a);
        q.push(b);
        q.push(c);

        for (int i = 0; i < 5; i++)
        {
            int x = q.top();
            q.pop();

            x++;
            q.push(x);
        }

        long long ans = q.top();
        q.pop();
        ans *= q.top();
        q.pop();
        ans *= q.top();
        q.pop();

        cout << ans << endl;
    }

    return 0;
}