#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;cin>>n;
    map<string,int> m;
    while(n--){
        string s;cin>>s;
        m[s]++;
        if(m[s]==1){
            cout<<"OK"<<endl;
        }
        else {
            int num = m[s];
            cout<<s<<num-1<<endl;
        } 
    }
    return 0;
}