#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int ans = 0;
    double per = b * 1.0;

    if (a <= per / m)
        ans = n * a;
    else if (n < m)
    {
        int na = n * a;
        int mb = b;
        ans = min(na, mb);
    }
    else
    {
        ans = (n / m) * b;
        n = n % m;
        if (a < b)
            ans += n * a;
        else if (n)
            ans += b;
    }

    cout << ans << endl;

    return 0;
}

/*



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    // Cost of buying all tickets individually
    int cost1 = n * a;

    // Cost of buying only special tickets (full m-tickets bundles)
    int cost2 = (n / m) * b + min((n % m) * a, b);

    // Print the minimum cost
    cout << min(cost1, cost2) << endl;

    return 0;
}





*/