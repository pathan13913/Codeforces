#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[n];
   
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    bool is_sorted = true;
    for (int i = 1; i < n; ++i) {
        if (a[i] < a[i - 1]) {
            is_sorted = false;
            break;
        }
    }

    if (is_sorted) {
        cout << "yes\n1 1\n";
        return 0;
    }

    int l = -1, r = -1;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] > a[i + 1]) {
            l = i;
            break;
        }
    }
    for (int i = n - 1; i > 0; --i) {
        if (a[i] < a[i - 1]) {
            r = i;
            break;
        }
    }

    for (int i = l, j = r; i < j; ++i, --j) {
        swap(a[i], a[j]);
    }


    bool sorted_after_reverse = true;
    for (int i = 1; i < n; ++i) {
        if (a[i] < a[i - 1]) {
            sorted_after_reverse = false;
            break;
        }
    }

    if (sorted_after_reverse) {
        cout << "yes\n" << l + 1 << " " << r + 1 << "\n";
    } else {
        cout << "no\n";
    }

    return 0;
}
