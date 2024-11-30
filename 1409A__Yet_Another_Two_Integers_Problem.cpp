// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int a, b, count = 0;
//         cin >> a >> b;

//         if (a < b)
//         {
//             int x = 10;

//             while (1)
//             {
//                 if (a == b || x == 0)
//                     break;

//                 if (a + x <= b)
//                 {
//                     a += x;
//                     count++;
//                 }
//                 else
//                     x--;
//             }
//         }
//         else if (a > b)
//         {
//             int x = 10;

//             while (1)
//             {
//                 if (a == b || x == 0)
//                     break;

//                 if (a - x >= b)
//                 {
//                     a -= x;
//                     count++;
//                 }
//                 else
//                 {
//                     x--;
//                 }
//             }
//         }

//         cout << count << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
 
        int  count = ceil(abs(a - b) / 10.0);
 
        cout << count << endl;
    }
 
    return 0;
}