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

    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int len = s.length();
        int flag = 1;
        for (int i = 0; i < len - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << len << endl;
        else
            cout << 1 << endl;
    }

    return 0;
}