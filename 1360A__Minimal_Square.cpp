#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int minn = min(a, b);
        minn = minn + minn;
        int maxx =max(a, max(b, minn));
        cout<<maxx*maxx<<endl;
    }
    return 0;
}