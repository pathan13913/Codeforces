#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int n) {



//  for (int i = 0; i < n; i++) {
//         for (int j = i; j < n ; j++) {

//             if (arr[i] > arr[j]) { 
//                 swap(arr[i],arr[j]);
//             }

//              for (int i = 0; i < n; i++) {
//                    cout << arr[i] << " ";
//                    }
         
//            cout << endl;
//         }

//         cout << endl;cout << endl;
//     }




    for (int outer = n-1; outer > 0; outer--) {
        for (int inner = 0; inner < outer; inner++) {

            if (arr[inner] > arr[inner+1]) {
                swap(arr[inner], arr[inner+1]);
            }

            for (int i = 0; i < n; i++) {
                   cout << arr[i] << " ";
            }

           cout << endl;
        }
     cout << endl;cout << endl;
    }
   
}

void selectionSort(int arr[], int n) {
    for (int current = 0; current < n-1; current++) {
        int minimum = arr[current];
        int minIndex;
        for (int i = current; i < n; i++) {
            if (arr[i] < minimum) {
                minimum = arr[i];
                minIndex = i;
            }
        }
        swap(arr[current], arr[minIndex]);
    }
}

void insertionSort(int arr[], int n) {
    for (int unsorted = 1; unsorted < n; unsorted++) {
        for (int i = unsorted; i > 0; i--) {
            if (arr[i] < arr[i-1]) {
                swap(arr[i], arr[i-1]);
            }
            else
                break;
        }
    }
}

int main() {
    int arr[] = {7, 2, 8, 5, 4};
    int n = 5;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
     cout << endl;
     //bubbleSort(arr, n);
     //selectionSort(arr, n);
    insertionSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

