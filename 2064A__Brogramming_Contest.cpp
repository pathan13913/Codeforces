#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag_0 = true;
        bool flag_1 = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                flag_0 = false;
                break;
            }
        }
        if (flag_0)
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                flag_1 = false;
                break;
            }
        }
        if (flag_1)
        {
            cout << 1 << endl;
            continue;
        }

        int count_1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                count_1++;
        }

        int count = 0;
        int flag = 0;
        int count_11 = 0;
        if (s[n - 1] == '1')
            count++;

        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
                count_11++;

            if (s[i] == '1' && flag == 1)
            {
                count++;
                flag = 0;
            }
            if (count_11 == count_1)
                break;

            if (s[i] == '0' && flag == 0)
            {
                count++;
                flag = 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}