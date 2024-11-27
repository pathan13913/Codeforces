#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int num = 0;
        int count = 0;

        for (int j = 1; ; j++)
        {
            num = 0;

            for (int k = 1; k <= 4; k++)
            {
                num = num * 10 + j;
                count += k;
                if (num == n)
                    break;
            }

            if (num == n)
                break;
        }

        cout << count << endl;
    }
    return 0;
}