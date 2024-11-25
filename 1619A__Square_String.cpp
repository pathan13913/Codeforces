#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int n = s.size();
        if (n % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {

            int mid = n / 2;
            int ans=1;

            for (int i = 0; i < mid; i++)
            {
                if (s[i] != s[i + mid])
                {
                    ans=0;
                    break;
                }
            }

            if(ans==1){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}