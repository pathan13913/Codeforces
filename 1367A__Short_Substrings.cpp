#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string s, s2;
        cin >> s;

        int len = s.length();

        for (int j = 1; j < len - 1; j++)
        {
            if (s[j] == s[j + 1])
            {
                int k;
                for (k = j; k < len - 1; k++)
                {
                    s[k] = s[k + 1];
                }
                s[k] = '\0';
                len--;
            }
        }

        for (int j = 0; j < len; j++)
            s2 += s[j];

        cout<<s2<< endl;
    }
    return 0;
}