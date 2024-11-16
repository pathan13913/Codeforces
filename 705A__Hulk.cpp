#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string hatelove = " hate";

    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            cout << "I" << hatelove << " it";
            break;
        }
        else if (i % 2 == 1)
        {
            cout << "I" << hatelove <<" that ";
            hatelove = " love ";
        }
        else
        {
            cout << "I" << hatelove <<" that ";
            hatelove = " hate ";
        }
    }

    return 0;
}