#include <bits/stdc++.h>
using namespace std;

int findComposite(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 1;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;

    int x = n / 2;
    int y = n - x;

    while (1)
    {

        if ((findComposite(x) == 1) && (findComposite(y) == 1))
        {

            break;
        }
        x--;
        y = n - x;
    }
    cout << x << " " << y << endl;
    return 0;
}