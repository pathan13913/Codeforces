#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int a, b, c;
        cin>>a>>b;
        c=max(a,b)-min(a,b);
        cout<<c<<endl;
    }

    return 0;
}