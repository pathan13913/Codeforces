#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]>=97)
            {
                s[j]=s[j]-32;
            }
        }
        if(s=="YES")
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