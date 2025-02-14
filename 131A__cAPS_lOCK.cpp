#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int flag = 1;

    if (str.size() == 1)
    {

        if (str[0] >= 'a' && str[0] <= 'z')
            str[0] = toupper(str[0]);
        else
            str[0] = tolower(str[0]);
        cout << str << endl;
        return 0;
    }

    for (int i = 1; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            cout << str << endl;
            return 0;
        }
    }
    if (str[0] >= 'a' && str[0] <= 'z')
    {

        str[0] = toupper(str[0]);

        for (int i = 1; i < str.size(); i++)
            str[i] = tolower(str[i]);
    }
    else
    {
        for (int i = 0; i < str.size(); i++)
            str[i] = tolower(str[i]);
    }

    cout << str << endl;

    return 0;
}