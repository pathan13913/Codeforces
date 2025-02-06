#include <bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string str = s.substr(0, 2);
        int num = stoi(str);


        if (num == 0)
        {
            cout << "12" + s.substr(2, 6) << " AM" << endl;
        }
        else if (num < 12)
        {
            cout << s << " AM" << endl;
        }
        else
        {
            if (num < 13)
            {
                cout << s << " PM" << endl;
            }
            else
            {
                num = num - 12;
                if (num < 10){
                    string str1 = "0" + to_string(num);
                    str1 += s.substr(2, 6);
                    cout << str1 << " PM" << endl;
                }else{
                    string str1 = to_string(num);
                    str1 += s.substr(2, 6);
                    cout << str1 << " PM" << endl;
                }
            }
        }
    }
    return 0;
}