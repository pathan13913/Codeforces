#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    if (n == 1)
    {
        int numCurr = s[0] - '0';
        int numUp = 9 - numCurr;
        if (numUp != 0 && numUp < numCurr)
            s[0] = numUp + '0';
        cout << s << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        int numCurr = s[i] - '0';
        int numUp = 9 - numCurr;
        if (i == 0 && numUp != 0 && numUp < numCurr)
            s[i] = numUp + '0';
        else if (i != 0 && numUp < numCurr)
            s[i] = numUp + '0';
    }

    cout << s << endl;

    return 0;
}