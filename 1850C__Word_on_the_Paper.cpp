#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char ch[8][8];
        string s="";
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>ch[i][j];
                if (ch[i][j]!='.')
                s+=ch[i][j];
            }
        }
        for(int i=0;i<s.length();i++)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}