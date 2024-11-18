#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int sumA = b + c;
        int sumB = a + c;
        int sumC = a + b;

        int resA = sumA == a ? 1 : 0;
        int resB = sumB == b ? 1 : 0;
        int resC = sumC == c ? 1 : 0;

        if (resA)
            cout << "YES" << endl;
        else if (resB)
            cout << "YES" << endl;
        else if (resC)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}