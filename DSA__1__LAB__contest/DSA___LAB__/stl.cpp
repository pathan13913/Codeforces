#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b) {
    return a < b;
}

int main() {
    int arr[] = {5, 4, 6, 1, 9, 7};
    int n = 6;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl<<endl;
    sort(arr, arr+n, cmp);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
