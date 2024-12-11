#include<bits/stdc++.h>

using namespace std;

bool cmp(string a, string b) {
    return a.length() < b.length();
}

int main() {
    string arr[] = {"red", "blue", "green", "yellow", "purple", "cyan", "magenta"};
    int n = 7;
    sort(arr, arr+7, cmp);
    for (int i = 0; i < 7; i++)
        cout << arr[i] << endl;
}
