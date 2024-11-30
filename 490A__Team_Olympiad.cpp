#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int countTeam = 0;

    int countA = 0;
    int countB = 0;
    int countC = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            countA++;
        else if (a[i] == 2)
            countB++;
        else if (a[i] == 3)
            countC++;
    }

    countTeam = min(countA, min(countB, countC));

    cout << countTeam << endl;

    for (int i = 0; i < countTeam; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] == 1)
            {
                cout << j + 1 << " ";
                a[j] = 0;
                break;
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (a[j] == 2)
            {
                cout << j + 1 << " ";
                a[j] = 0;
                break;
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (a[j] == 3)
            {
                cout << j + 1 << " ";
                a[j] = 0;
                break;
            }
        }
        cout << endl;
    }

    return 0;
}