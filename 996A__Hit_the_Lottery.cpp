#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    int a[5] = {100, 20, 10, 5, 1};
    int count = 0;
    long long int ans = 0;

    for (int i = 0; i < 5; i++)
    {

        while (n >= a[i])
        {
            count++;
            n -= a[i];
        }
    }

    cout << count << endl;
    return 0;
}