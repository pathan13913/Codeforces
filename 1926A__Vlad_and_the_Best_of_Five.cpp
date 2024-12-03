#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       string s;
       cin>>s;
       int countA = count(s.begin(),s.end(),'A');

       if (countA >= 3)
       cout<<'A'<<endl;
       else
       cout<<'B'<<endl;


    }
    return 0;
}