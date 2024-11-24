#include <iostream>
using namespace std;

int findLowerBound(int points[], int n, int A) {
    int low = 0, high = n - 1, result = n;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (points[mid] >= A) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}


int findUpperBound(int points[], int n, int B) {
    int low = 0, high = n - 1, result = n;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (points[mid] > B) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    int T; 
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int n, q;
        cin >> n >> q;

        int points[n]; 
        for (int i = 0; i < n; ++i) {
            cin >> points[i];
        }

        cout << "Case " << t << ":" << endl;

        for (int i = 0; i < q; ++i) {
            int A, B;
            cin >> A >> B;

           
            int lower = findLowerBound(points, n, A);
            int upper = findUpperBound(points, n, B);

          
            int count = upper - lower;
            cout << count << endl;
        }
    }

    return 0;
}
