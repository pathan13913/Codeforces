#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, time;
    cin >> n >> time;
    int total_time_have = 240 - time;
    int count = 0;
    int solve_in_time = 0;

    for (int i = 1; i <= n; i++)
    {
        solve_in_time += 5 * i;
        if (total_time_have >= solve_in_time)
        {
            count++;
        }
        else
            break;
    }

    cout << count << endl;
    return 0;
}
