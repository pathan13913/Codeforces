#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int count = 0;
    int flag = 2;
    int sum = 1;

    for (int i = 1; i <= n;)
    {

        if (sum <= n)
            count++;

        i += flag;
        sum += i;
        flag++;

        
    }
    cout << count << endl;
    return 0;
}