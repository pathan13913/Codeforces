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
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'B')
            {
                count++;
                for (int j = 1; j < k && i < n; j++)
                {
                    str[i] = 'W';
                    i++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}