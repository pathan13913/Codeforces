#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int a = s[0] - '0';
        int b = s[2] - '0';
        
        if (a == b)
        {
            cout <<a<<'='<<b<< endl;
        }
        else if (a > b)
        {
            cout <<a<<'>'<<b<< endl;
        }
        else
        {
            cout <<a<<'<'<<b<< endl;
        }
    }

    return 0;

}