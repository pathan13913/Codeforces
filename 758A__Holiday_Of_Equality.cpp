#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int max = arr[n - 1];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] < max){
            sum += max - arr[i];
           
        }
        
    }
    cout<< sum << endl;

    return 0;
}