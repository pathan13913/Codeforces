#include<bits/stdc++.h>
using namespace std;
bool findNum(int arr[],int n,int key)
{
    int start = 0;
    int end = n-1;
    while(start<=end)   
    {
        int mid = start+(end-start)/2;
        if(arr[mid]==key)
            return true;
        else if(arr[mid]<key)
            start = mid+1;
        else
            end = mid-1;
    }
    return false;
}

int lowerBoundd(int arr[],int n,int key)
{
    int start = 0;
    int end = n-1;
    int ans = n;
    while(start<=end)
    {
        int mid = start+(end-start)/2;
        if(key <= arr[mid])
        {
            ans = mid;
            end = mid-1;
        }
        else
            end = mid-1;
    }
    return ans;
}

int upperBound(int arr[],int n,int key)
{
    int start = 0;
    int end = n-1;
    int ans = n;
    while(start<=end)
    {
        int mid = start+(end-start)/2;
        if(key < arr[mid])
        {
            ans = mid;
            start = mid+1;
        }
        else
            end = mid-1;
    }
    return ans;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,7,7,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 7;
    cout<<findNum(arr,n,key)<<endl;
}