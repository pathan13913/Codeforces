#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        int fst = a % 10;
        a /= 10;
        int lst = a % 10;
        cout << fst+lst << endl;
    }
    return 0;
}