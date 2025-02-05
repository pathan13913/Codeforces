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

     string s, t;
    cin >> s >> t;

    int position = 0; 

    for (char ch : t) {
        if (s[position] == ch) {
            position++; 
        }
    }

    cout << position + 1 << endl; 
    return 0;
}