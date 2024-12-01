// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         int check = n / 2;

//         if (check % 2 != 0)
//             cout << "NO" << endl;
//         else
//         {
//             cout << "YES" << endl;

//             int aEven[check];
//             int aOdd[check];
//             int even = 2;
//             int evenSum = 0;
//             for (int i = 0; i < check; i++)
//             {
//                 aEven[i] = even;
//                 evenSum += even;
//                 even += 2;
//             }
//             int odd = 1;
//             int oddSum = 0;
//             for (int i = 0; i < check-1; i++)
//             {
//                 aOdd[i] = odd;
//                 oddSum += odd;
//                 odd += 2;
//             }
//             int lastNum = evenSum - oddSum;
//             aOdd[check-1] = lastNum;
//             for (int i = 0; i < check; i++)
//             {
//                 cout << aEven[i] << " ";
//             }
//             for (int i = 0; i < check-1; i++)   

//             {
//                 cout << aOdd[i] << " ";
//             }
//             cout << aOdd[check-1] << endl;
//         }
//     }
//     return 0;
// }





#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        if (n % 2 != 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            
            int half = n / 2;
            int evenSum = 0, oddSum = 0;
            int even = 2, odd = 1;
            
           
            for (int i = 0; i < half; ++i) {
                evenSum += even;
                cout << even << " ";
                even += 2;
            }
            
            
            for (int i = 0; i < half - 1; ++i) {
                oddSum += odd;
                cout << odd << " ";
                odd += 2;
            }
            
            
            int lastNum = evenSum - oddSum;
            cout << lastNum << endl;
        }
    }
    return 0;
}
