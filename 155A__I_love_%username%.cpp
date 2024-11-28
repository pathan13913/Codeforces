#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    int flagMax = 1;
    int flagMin = 1;
    for (int i = 1; i < n; i++)
    {
        int maxValue = a[i];
        int minValue = a[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[i] == a[j])
            {
                maxValue = INT_MIN;
                break;
            }
            maxValue = max(maxValue, a[j]);
        }
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[i] == a[j])
            {
                minValue = INT_MAX;
                break;
            }
            minValue = min(minValue, a[j]);
        }
 
        if (maxValue == a[i] || minValue == a[i])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}