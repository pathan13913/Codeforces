#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.length();
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            count++;
        }
    }

    if (count > len / 2)
    {

        for (int i = 0; i < len; i++)
        {
            s[i] =toupper(s[i]);
        }
    }
    else
    {

        for (int i = 0; i < len; i++)
        {
            s[i] =tolower(s[i]);
        }
    }
    cout << s << endl;
}