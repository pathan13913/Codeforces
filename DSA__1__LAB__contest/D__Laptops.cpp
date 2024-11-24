#include <bits/stdc++.h>

using namespace std;

void check(pair<int, int> p[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        if (p[i].first < p[i + 1].first && p[i].second > p[i + 1].second)
        {
            cout << "Happy Alex" << endl;
            return;
        }
    }
    cout << "Poor Alex" << endl;
    return;
}

int main()
{

    int n;
    cin >> n;

    pair<int, int> pAndQ[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> pAndQ[i].first >> pAndQ[i].second;
    }

    sort(pAndQ, pAndQ + n);

    check(pAndQ, n);

    return 0;
}