#include <bits/stdc++.h>
using namespace std;


void countSort(int arr[],int n,int r){
    int count[r+1]={0};
    int output[n];
    int idx = 0;

    for(int i= 0;i<n; i++){
         count[arr[i]]++;
    }

    for(int i= 0;i<r+1; i++){
         for(int j= 0;j<count[i]; j++){

                output[idx]=i;
                idx++;
        }
    }

    for(int i= 0;i<n; i++){
         arr[i] = output[i];
    }

}



int main() {

    int arr[] = {1,2,4,3,0,2,1,7,1,4,3,0};
    int n = 12;
    int maxValue= 7;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl<< endl;  

    countSort(arr,n,maxValue);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout <<"\nend"<<endl;
}

