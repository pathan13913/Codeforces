#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m + 1);
    for (int i = 1; i <= m; i++)
        cin >> v[i];

    long long int count = 0;
    if (v[1] != 1)
        count = v[1] - 1;
    int prev = v[1];
    for (int i = 2; i <= m; i++)
    {
        if (v[i] == v[i - 1] && v[i] == 1)
        {
        }
        else if (prev > v[i])
        {
            count += n - prev + v[i] ;
            prev = v[i];
        }
        else
        {
            count += v[i] - prev;
            prev = v[i];
        }
    }
    cout << count << endl;

    return 0;
}