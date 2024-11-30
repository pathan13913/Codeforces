#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
            cin >> arr[j];

        sort(arr, arr + n);

        set<int> s;
        for (int j = 0; j < n; j++)
            s.insert(arr[j]);

        int len = s.size();
        int arr2[len];
        int k = 0;

        for (auto itr = s.begin(); itr != s.end(); itr++)
            arr2[k++] = *itr;

        int flag = 1;
        for (int j = 0; j < len - 1; j++)
        {
            if (arr2[j] + 1 != arr2[j + 1])
            {
                flag = 0;
                break;
            }
        }


        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}