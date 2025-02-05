#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    int mk = min(m,k);
    if (n <= mk)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}