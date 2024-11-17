#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int len = s.size();
    set<char> st;
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            st.insert(s[i]);
        }
    }
    cout << st.size() << endl;
    return 0;
}