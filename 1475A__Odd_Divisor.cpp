#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        if (n % 2)
            cout << "YES" << endl;
        else
        {
            while (n % 2 == 0)
            {
                n /= 2;
            }
            if (n > 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}