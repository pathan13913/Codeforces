#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n1;
        cin >> n1;

        string s1;
        cin >> s1;

        string s2 = "Timur";
        int n2 = s2.size();

        if (n1 != n2)
        {
            cout << "NO" << endl;
        }
        else
        {
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());

            if (s1 == s2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}