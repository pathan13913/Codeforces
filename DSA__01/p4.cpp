
#include<bits/stdc++.h>

using namespace std;

double root(double n) {
    double low = 0, high = n, mid;
    double precision = 0.0001;
    while (high - low > precision) {
        mid = (high + low)/2;
        if (mid*mid > n)
            high = mid;
        else
            low = mid;
    }
    return high;
}

int main() {
    double n;
    cin >> n;
    cout << root(n) << endl;
}
