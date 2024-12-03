#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        for (int i = 1; i <= 9; i++)
        {
            int num = i;
            for (int j = 1; j <= 9; j++)
            {

                if (num <= n)
                    count++;
                else
                    break;
                num = num * 10 + i;
            }
        }
        cout<< count<<endl;
    }
    return 0;
}