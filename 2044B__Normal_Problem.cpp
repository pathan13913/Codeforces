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
        reverse(s.begin(), s.end());
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'p')
            s[i] = 'q';
            else if(s[i] == 'q')
            s[i] = 'p';
            else if(s[i] == 'w')
            s[i] = 'w';
        }
       cout<<s<<endl;
    }
    return 0;
}