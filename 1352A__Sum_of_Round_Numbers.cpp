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

        int count = 0;
        int len = s.length();
        int arr[100];
        int j = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] != '0')
            {
                count++;
                int num = s[i] - '0';
                double zero = pow(10, len - i - 1);
                arr[j++] = num * zero;
            }
        }
        cout << count << endl;

        for (int i = 0; i < count; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
