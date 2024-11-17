#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, l, m, n, d, ans = 0;
    cin >> k >> l >> m >> n >> d;

    int a[] = {k, l, m, n};
    int b[d + 1] = {0};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < d; j++)
        {
            if ( (j+1) % a[i] == 0)
            {
                b[j] = 1;
            }
        }
    }
    

    for (int i = 0; i < d; i++)
    {
        if (b[i] == 0)
        {
            ans++;
        }
    }

    int result = d - ans;

    cout << result << endl;
    return 0;
}