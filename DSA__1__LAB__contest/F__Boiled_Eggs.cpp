#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, p, q;
        cin >> n >> p >> q;
        int w[n];

        for (int j = 0; j < n; j++)
        {
            cin >> w[j];
        }

        int count = 0;
        int totalWeight = 0;

        for (int j = 1; j <=p; j++)
        {
            totalWeight += w[j-1];

            if (totalWeight <= q)
            {

                count++;
            }
            else
            {
                break;
            }
        }

        cout << "Case " << i + 1 << ": " << count << endl;
    }
    return 0;
}