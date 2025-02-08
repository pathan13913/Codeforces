#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 4 == 0 || n % 7 == 0 || n % 44 == 0 || n % 77 == 0 || n % 47 == 0 || n % 74 == 0|| n % 444 == 0 & n % 777 == 0|| n % 447 == 0 || n % 474 == 0 || n % 744 == 0 || n % 774 == 0 || n % 747 == 0 || n % 477 == 0 || n % 4477 == 0 || n % 4747 == 0 || n % 4774 == 0)
    {
        cout << "YES" << endl;
        return 0;
    }
    int digit = 0;
    while (n != 0)
    {
        digit = n % 10;
        if (digit != 4 && digit != 7)
        {
            cout << "NO" << endl;
            return 0;
        }
        n /= 10;
    }
    cout << "NO" << endl;

    return 0;
}