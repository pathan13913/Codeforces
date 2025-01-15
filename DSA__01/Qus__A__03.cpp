#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,4,4,4,6,7};

    int terget=4;

    

    int low= lower_bound(arr,arr+6,terget)-arr;
    int high= upper_bound(arr,arr+6,terget)-arr-1;
    

    int result=high-low+1;

    cout<<result<<endl;
    return 0;
}