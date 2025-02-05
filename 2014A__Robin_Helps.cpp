#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, robinGold = 0, count = 0;
        cin >> n >> k;
        vector<int> a(n);

        for (int &x : a) cin >> x;

        for (int x : a) {
            if (x >= k) 
                robinGold += x; 
            else if (x == 0 && robinGold > 0) {
                robinGold--; 
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
