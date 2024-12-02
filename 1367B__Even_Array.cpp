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
//         int arr[n];
//         int count = 0;

//         for (int j = 0; j < n; j++)
//             cin >> arr[j];

//         if (n < 1)
//             cout << "-1" << endl;
//         else
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (j == n - 1)
//                 {
//                     if (j % 2 != arr[j] % 2)
//                         count = -1;

//                 }
//                 else
//                 {
//                     if (j % 2 != arr[j] % 2)
//                     {
//                         count++;
//                         if (arr[j] == arr[j + 1])
//                         {
//                             count = -1;
//                             break;
//                         }

//                         swap(arr[j], arr[j + 1]);
//                     }
//                 }
//             }
//             cout << count << endl;
//         }
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Length of the array
        cin >> n;
        int a[n];
        
        int odd_index_mismatch = 0, even_index_mismatch = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            
            // Check if the parity of index and element doesn't match
            if (i % 2 == 0 && a[i] % 2 != 0) { 
                even_index_mismatch++; // Count mismatched even-indexed elements
            } else if (i % 2 != 0 && a[i] % 2 != 1) {
                odd_index_mismatch++; // Count mismatched odd-indexed elements
            }
        }

        // To make the array "good", the mismatches must be equal
        if (even_index_mismatch == odd_index_mismatch) {
            cout << even_index_mismatch << endl;
        } else {
            cout << -1 << endl; // Not possible
        }
    }

    return 0;
}
