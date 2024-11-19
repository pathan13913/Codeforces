#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int arr[]={a,b,c};
        sort(arr,arr+3);
        if(arr[0]==arr[1])
        {
            cout<<arr[2]<<endl;
        }
        else    
        {
            cout<<arr[0]<<endl;
        }
    }
    
    return 0;
}   