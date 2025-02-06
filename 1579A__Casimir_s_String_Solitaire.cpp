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
        int sizes = s.size();
        int counta = 0, countb = 0, countc = 0;
        for (int i = 0; i < sizes; i++)
        {
            if (s[i] == 'A')
                counta++;
            else if (s[i] == 'B')
                countb++;
            else
                countc++;
        }
        if (counta > countb)
            cout << "NO" << endl;
        else
        {
            countb -= counta;
            if(countb == countc)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;   
        }
    }

    return 0;
}