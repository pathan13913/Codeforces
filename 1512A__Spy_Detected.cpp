#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int len;
        cin >> len;
        int arr[len];
        int arr2[len];

        for (int j = 0; j < len; j++)
        {
            cin >> arr[j];
            arr2[j] = arr[j];
        }
        sort(arr2, arr2 + len);
        int num;
        if (arr2[0] == arr2[1])
        {
            num = arr2[len - 1];
        }
        else
        {
            num = arr2[0];
        }
        for(int i=0;i<len;i++)
        {
            if(arr[i]==num)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}