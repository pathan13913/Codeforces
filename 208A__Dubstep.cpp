#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s1;
    cin >> s1;
    string s2 = "WUB";

    size_t pos = s1.find(s2);
    while (pos != string::npos)
    {
        s1.replace(pos, s2.length(), " ");
        pos = s1.find(s2, pos);
    }
    while(s1[0] == ' '){
        s1.erase(0,1);
    }


    cout << s1;

    return 0;
}