#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h,m;
        cin>>h>>m;
        int findH=24-h-1;
        int findM=60-m;
        int result = findH*60+findM;
        cout<<result<<endl;

    }

    return 0;
}