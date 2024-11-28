#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int len1 = s1.length();
    int len2 = s2.length();
    for(int i=0; i<len1; i++)
    {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }
    
    if(s1 == s2)
        cout << 0;
    else if(s1 < s2)
        cout << -1;
    else
        cout << 1;
    return 0;
}