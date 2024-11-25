#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
      string s1,s2;
      s1="codeforces";
      cin>>s2;
      int n=s2.size();
      int count=0;
      for(int j=0;j<n;j++)
      {
          if(s1[j]!=s2[j])
          {
              count++;
          }
      }
      cout<<count<<endl;
        
    }
    return 0;
}