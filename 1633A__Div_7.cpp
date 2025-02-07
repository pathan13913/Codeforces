#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n % 7 == 0) {
            cout << n << endl;
        } else {
            int lastDigit = n % 10;
            int base = n - lastDigit; // Remove last digit

            for (int i = 0; i < 10; i++) { // Try modifying last digit
                int candidate = base + i;
                if (candidate % 7 == 0) {
                    cout << candidate << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
