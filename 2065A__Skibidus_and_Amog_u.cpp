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

        string str = "us";
        if (s == str)
            cout << 'i' << endl;
        else
        {
            string str1 = ""+s[len-2]+s[len-1];

            if (str == "us")
            {
                s.replace(len - 2, 2, "i");
                cout << s << endl;
            }
            else
                cout << s << endl;
        }
    }
    return 0;
}