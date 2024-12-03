// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//             cin >> arr[i];

//         int flag = 0;
//         int i, j;
//         for (i = 0; i < n; i++)
//         {
//             int count =0;
//             for (j = i; j < n; j++)
//             {
//                 if (arr[i] == arr[j])
//                     count++;
//             }
//             if (count >= 3)
//             {
//                 flag = 1;
//                 break;
//             }
//         }

//         if (flag)
//             cout<<arr[i] << endl;
//         else
//             cout<< -1 << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         set<int> s;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//             s.insert(arr[i]);
//         }

//         int flag = 0;
//         int value = 0;
//         for (auto it = s.begin(); it != s.end(); it++)
//         {
//             int count = std::count(arr, arr + n, *it);
//             if (count >= 3)
//             {
//                 flag = 1;
//                 value = *it;
//                 break;
//             }
//         }

//         if (flag)
//             cout << value << endl;
//         else
//             cout << -1 << endl;
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         set<int> s;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//             s.insert(arr[i]);
//         }

//         int flag = 0;
//         int value = 0;

//         for (int i = 0; i < n; i++)
//         {
//             int count = std::count(arr, arr + n, arr[i]);

//             if (count >= 3)
//             {
//                 flag = 1;
//                 value = arr[i];
//                 break;
//             }
//         }

//         if (flag)
//             cout << value << endl;
//         else
//             cout << -1 << endl;
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         unordered_map<int, int> freq;

//         // Input array and count frequencies
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//             freq[arr[i]]++;
//         }

//         // Find the first element with frequency >= 3
//         int value = -1;
//         for (int i = 0; i < n; i++)
//         {
//             if (freq[arr[i]] >= 3)
//             {
//                 value = arr[i];
//                 break;
//             }
//         }

//         cout << value << endl;
//     }
//     return 0;
// }



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
        vector<int> arr(n);

        // Input the array
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // Sort the array
        sort(arr.begin(), arr.end());

        // Check for any element with frequency >= 3
        int value = -1, count = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i - 1])
            {
                count++;
                if (count == 3)
                {
                    value = arr[i];
                    break;
                }
            }
            else
            {
                count = 1; // Reset count if the current element is different
            }
        }

        cout << value << endl;
    }
    return 0;
}


