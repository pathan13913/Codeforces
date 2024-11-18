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
        int leftsum=s[0]-'0'+s[1]-'0'+s[2]-'0';
        int rightsum=s[3]-'0'+s[4]-'0'+s[5]-'0';
        if(leftsum==rightsum)
        {
            cout<<"YES"<<endl;
        }
        else    
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
