#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    string s;
    cin >> s;

    string original = s;
    sort(s.begin(), s.end());

    if (s == original) {
        bool swapped = false;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != s[0]) {  
                swap(s[0], s[i]);
                swapped = true;
                break;
            }
        }
        if (!swapped) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    cout << s << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
