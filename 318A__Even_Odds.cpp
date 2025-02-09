#include <bits/stdc++.h>
using namespace std;
int main()
{
 
    long long int k, n;
    cin >> k>> n;
 
    long long int fast = k % 2 == 0 ? (k / 2) : (k / 2) + 1;
 
    long long int num;
    if (n <= fast)
    {
        num = 1;
        for (int i = 1; i < n; i++)
            num += 2;
    }
    else
    {
        num = 2;
        n -= fast;
        for (int i = 1; i < n; i++)
            num += 2;
    }
 
    cout << num << endl;
 
    return 0;
}


/*



#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int k, n;
    cin >> k >> n;

    long long int fast = (k + 1) / 2; // Number of odd numbers in range 1 to k

    long long int num; // Should be long long to handle large values

    if (n <= fast) {
        // `n`-th odd number: 1, 3, 5, ...
        num = 2 * (n - 1) + 1;  // 2*n -1
    } else {
        // `n`-th even number: 2, 4, 6, ...
        n -= fast; // Adjust index for even sequence
        num = 2 * n;
    }

    cout << num << endl;

    return 0;
}


*/