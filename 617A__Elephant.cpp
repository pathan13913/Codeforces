#include <iostream>
using namespace std;
bool check(int a, int b)
{
    if (a >= b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int n, sum = 0, ans = 0, a[] = {1, 2, 3, 4, 5};
    cin >> n;
    int input = n;

    int i = 4;

    while (n > 0)
    {

        if (check(n, a[i]))
        {
            sum += a[i];
            n -= a[i];
            ans++;
        }
        else
        {
            i--;
        }
    }

    if (sum == input)
    {
        cout << ans;
    }
    else
    {
        cout << "not found";
    }

    return 0;
}