#include<bits/stdc++.h>
using namespace std;

int lwrbnd(int arr[],int n,int t)
{
    int l = 0;
    int h = n-1;
    int ans = n;

    while(l <= h)

    {
        int mid = (l+h)/2;

        if(t <= arr[mid])
        {
            ans = mid;
            h = mid-1;

        }
        else
        {
             l = mid + 1;
        }
    }

    return ans;
}

int uprbnd(int arr[],int n,int t)
{
    int l = 0;
    int h = n-1;
    int ans = n;

    while(l <= h)
    {
        int mid = (l+h)/2;

        if(t < arr[mid])
        {
            ans = mid;
             h = mid-1;

        }
        else
        {

            l = mid + 1;
        }


    }

    return ans;
}




int main()
{
    int arr[]= {4,4,4,4,4,4};
    int n=6;

    int tr =4;

    int lb = lwrbnd(arr,n,tr);
    int ub = uprbnd(arr,n,tr);

    int ans = ub -lb;
    cout<<ans<<endl;


    return 0;
}

