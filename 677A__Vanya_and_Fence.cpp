#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a <= h)
        {
            count++;
        }
        else
        {
            count += 2;
        }
    }
    cout << count << endl;

    return 0;
}
