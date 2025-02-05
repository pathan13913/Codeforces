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
        string s;
        cin >> s;
        string value = "314159265358979323846264338327";
        int count = 0;
        for (int i = 0; i < value.length(); i++)
        {
            if (s[i] == value[i])
                count++;
            else
                break;
        }
         cout << count << endl;
    }
    return 0;
}