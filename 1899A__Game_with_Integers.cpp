#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int flag =n%3==0?0:1;
        if(flag)
        cout<<"First"<<endl;
        else
        cout<<"Second"<<endl;
    }
    return 0;
}