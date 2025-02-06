#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int result = n / 4;
        if (n % 4 != 0)
            result++;
        cout << result << endl;
    }
    return 0;
}