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

        char ch[27];
        for (int i = 1; i <= 26; i++)
            ch[i] = 'a' + (i - 1);

        int n;
        cin >> n;

        priority_queue<char, vector<char>, greater<char>> pq;

        int i = 26;
        int j = 2;
        while (true)
        {
            if (n == 0 || i == 0)
                break;

            if (n >= (i + j))
            {
                pq.push(ch[i]);
                n -= i;
                j--;
            }
            else
                i--;
        }
       

        while (!pq.empty())
        {
            cout << pq.top();
            pq.pop();
        }
        cout << endl;
    }

    return 0;
}