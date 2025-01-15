#include<bits/stdc++.h>

using namespace std;

void binSearch(int arr[], int n, int k) {
    int low = 0, high = n-1, mid;
    while (high - low > 1) {
        int mid = (high + low)/2;
        if (arr[mid] < k)
            low = mid;
        else
            high = mid;
    }
    cout << k << " is between " << arr[low] << " and " << arr[high] << endl;
}

int main() {
    int arr[] = {1, 3, 4, 6, 9, 11, 15, 18};
    int n = 8;
    binSearch(arr, n, 13);
}
