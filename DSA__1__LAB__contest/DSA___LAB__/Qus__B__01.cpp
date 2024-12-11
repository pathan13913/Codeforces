#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n=7;
    int arr[]={7,3,2,4,9,12,56};
    
    sort(arr,arr+n);
   
    int t;
    cin>>t;

    int ans= arr[t-1]-arr[0];
    
    cout<<ans<<endl;


    return 0;
}