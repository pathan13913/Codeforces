#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_water = k * l;
    int total_slice = c * d;
    int total_solt = p;

    int water = total_water / nl;
    int solt = total_solt / np;

    int count = min(total_slice,min(water, solt))/n;

    
    cout << count << endl;

    return 0;
}