#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, int> mp;
    string winner;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
        if (mp[s] >= mp[winner])
            winner = s;
    }

    cout << winner << endl;

    return 0;
}