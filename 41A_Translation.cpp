#include <iostream>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int lenS = s.length();
    int lenT = t.length();
    int flag = 1;

    if (lenS != lenT)
    {
        flag = 0;
    }
    else
    {
         for (int i = 0; i < lenS; i++)
        {

            if (s[i] != t[lenT - i - 1])
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
    {

        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}