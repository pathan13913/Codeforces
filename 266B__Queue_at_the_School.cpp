#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    for (int j = 0; j < t; j++)
    {
        for (int k = 0; k < n - 1; k++)
        {
            if (s[k] == 'B' && s[k + 1] == 'G')
            {
                swap(s[k], s[k + 1]);
                k++;
            }
        }
    }
    cout << s << endl;
    return 0;
}