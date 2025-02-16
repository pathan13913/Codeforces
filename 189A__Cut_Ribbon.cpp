/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    vector<int> dp(n + 1, -1);  // Initialize DP array with -1 (invalid state)
    dp[0] = 0;  // Base case: no ribbon means 0 pieces

    for (int i = 1; i <= n; i++) {
        if (i >= a && dp[i - a] != -1)
            dp[i] = max(dp[i], dp[i - a] + 1);
        if (i >= b && dp[i - b] != -1)
            dp[i] = max(dp[i], dp[i - b] + 1);
        if (i >= c && dp[i - c] != -1)
            dp[i] = max(dp[i], dp[i - c] + 1);
    }

    cout << dp[n] << endl;  // Maximum number of pieces
    return 0;
}
*/

//// this is ok best solution

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int dp[n + 1];
    dp[0] = 0;
    int x, y, z;

    for (int i = 1; i <= n; i++)
    {
        x = INT_MIN, y = INT_MIN, z = INT_MIN;
        if (i >= a)
            x = dp[i - a];
        if (i >= b)
            y = dp[i - b];
        if (i >= c)
            z = dp[i - c];

        dp[i] = 1 + max(z, max(x, y));
    }

    cout << dp[n];
}

// this is not working

/*

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int arr[3];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    sort(arr, arr + 3);
    int count = 0;

    while (n > 0)
    {
        if(n%arr[0]==0){
            count = count + n/arr[0];
            break;
        }
        else if (n % arr[0] == a || n % arr[0] == b || n % arr[0] == c)
        {
            count++;
            n = n - arr[0];
        }
        else if (n % arr[1] == a || n % arr[1] == b || n % arr[1] == c)
        {
            count++;
            n = n - arr[1];
        }
        else if (n % arr[2] == a || n % arr[2] == b || n % arr[2] == c)
        {
            count++;
            n = n - arr[2];
        }
        else if( n % arr[0] == 0)
        {
            count++;
            n = n - arr[0];
        }
        else if (n % arr[1] == 0)
        {
            count++;
            n = n - arr[1];
        }
        else if (n % arr[2] == 0)
        {
            count++;
            n = n - arr[2];
        }else {
            count ++;
            break;
        }
    }
    cout << count << endl;
    return 0;
}

*/