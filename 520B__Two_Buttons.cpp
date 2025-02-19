

#include <bits/stdc++.h>
using namespace std;

int minOperations(int n, int m)
{
    int steps = 0;

    while (m > n)
    {
        if (m % 2 == 0)
        {
            m /= 2; // If even, divide by 2
        }
        else
        {
            m++; // If odd, make it even
        }
        steps++;
    }

    return steps + (n - m); // Add remaining decrements if m < n
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << minOperations(n, m) << endl;
    return 0;
}



/*
this is my approtch but this not work

#include <bits/stdc++.h>
using namespace std;
pair<int, int> multi(int n, int m)
{
    int count = 0;
    while (n < m)
    {
        n *= 2;
        count++;
        if (n == m)
            break;
    }
    return make_pair(n, count);
}
int minus(int n)
{
    return n - 1;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int ans = 0;
    if (n == m)
    {
        cout << 0 << endl;
        return 0;
    }
    if (n > m)
    {
        ans = n - m;
        cout << ans << endl;
        return 0;
    }
    if (m % n == 0)
    {
        while (n != m)
        {
            n *= 2;
            ans++;
        }
        cout << ans << endl;
        return 0;
    }
    int count = max(n,m);
    int maxnum = 0;

    while (n > 0)
    {
        auto nn = multi(n, m);
        if (nn.first != m)
            count = min(count, nn.second + nn.first - m);
        else if (nn.first == m)
            count = min(count, nn.second);
        n--;
    }

    cout << count << endl;
    return 0;
}

*/