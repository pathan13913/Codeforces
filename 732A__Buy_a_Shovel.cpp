#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, r;
    cin >> k >> r;

    int i = 1;
    while (1)
    {
        int n = k * i;

        if (n % 10 == 0 || n % 10 == r)
            break;

        i++;
    }

    cout << i << endl;
    return 0;
}