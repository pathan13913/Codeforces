#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    
    int lenA = a.size();
    int lenB = b.size();
    int lenC = c.size();

    if (lenA + lenB != lenC)
    {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < lenA; i++)
    {
        for (int j = 0; j < lenC; j++)
        {
            if (a[i] == c[j])
            {
                c[j] = '0';
                break;
            }
        }
    }

    for (int i = 0; i < lenB; i++)
    {
        for (int j = 0; j < lenC; j++)
        {
            if (b[i] == c[j])
            {
                c[j] = '0';
                break;
            }
        }
    }

    for (int j = 0; j < lenC; j++)
    {
        if (c[j] != '0')
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}