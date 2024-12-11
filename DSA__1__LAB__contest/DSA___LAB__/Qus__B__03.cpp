#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,4,4,4,6,7};

    int terget=4;

    //cin>>terget;

    int low= lower_bound(arr,arr+6,terget)-arr;
    int high= upper_bound(arr,arr+6,terget)-arr-1;

    cout<<low<<" "<<high;
    return 0;
}