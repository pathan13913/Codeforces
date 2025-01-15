#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 9, 3, 10, 4, 20, 2}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + size);

    
    int longest = 1; 
    int current = 1; 

    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1] + 1) {
            current++;
        } else if (arr[i] != arr[i - 1]) {
            
            longest = max(longest, current);
            current = 1;
        }
    }

   
    longest = max(longest, current);

   
    cout << longest << endl;

    return 0;
}
