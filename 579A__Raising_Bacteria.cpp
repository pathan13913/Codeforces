#include <bits/stdc++.h>
using namespace std;
int findCount(int n)
{
    int i = 1;
    while (i <= n)
    {
        i *= 2;
    }
    return n-(i / 2);
}
int main()
{
    long long int n;
    cin >> n;
    int count = 0;

    while (n > 0)
    {
         n = findCount(n);
        count++;
    }

    cout << count << endl;

    return 0;
}