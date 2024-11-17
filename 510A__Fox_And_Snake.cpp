#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int flag = 1;
    for (int i = 1; i <= m; i++)
    {

      
        i % 4 == 0 ? flag = 0 : flag = 1;

        for (int j = 1; j <= n; j++)
        {
            if (i % 2 == 1)
            {
                cout << "#";
            }
            else
            {
                if (j == 1 || j == n)
                {

                    if (flag)
                    {
                        cout << ".";
                        flag = 0;
                       
                    }
                    else
                    {
                        cout << "#";
                        flag = 1;
                    
                    }
                }
                else
                {
                    cout << ".";
                }
            }
        }

        cout << endl;
    }
    return 0;
}