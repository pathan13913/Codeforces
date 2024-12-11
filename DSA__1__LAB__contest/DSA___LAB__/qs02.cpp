#include<bits/stdc++.h>
using namespace std;

void sortArray(int arr[],int n)
{
    for(int i = 0; i<n-1; i++)
    {
        for(int j = 0; j<n-1-i; j++)
        {
            int a = arr[j]*arr[j];
            int b = arr[j+1]*arr[j+1];
            if(a>b)
                swap(arr[j],arr[j+1]);

        }
    }

}


int main()
{
    int arr[]= {-10,5,-3,7,-2};
    int n=5;

    sortArray(arr,n);


    for(int i = 0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}
