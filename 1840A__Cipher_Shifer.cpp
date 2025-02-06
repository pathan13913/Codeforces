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
        int n;
        cin >> n;

        string s;
        cin >> s;
        string result;

        for (int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(s[i] == s[j]){
                    result += s[i];
                    i = j;
                    break;
                }
               
            }
        }
        cout << result << endl;
    }

    return 0;
}