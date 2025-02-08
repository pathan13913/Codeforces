#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;

    int count = 0;
    char check = s[0];

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == check)
            count++;
        else
        {
            check = s[i];
            count = 1;
        }
        if (count == 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}