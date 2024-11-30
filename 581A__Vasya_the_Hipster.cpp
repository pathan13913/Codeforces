#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int x=min(a,b);
    int y=max(a,b);
    int z=y-x;
    int ans=z/2;

    cout<<x<<" "<<ans<<endl;
    
    return 0;
}