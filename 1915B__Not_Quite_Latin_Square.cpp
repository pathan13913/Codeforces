#include <bits/stdc++.h>
using namespace std;
int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
int t;
cin>>t;
while(t--){
    vector <int> v(3,0);
    for(int i=0;i<3;i++){
        char a,b,c;
        cin>>a;
        if(a=='A') v[0]++;
        else if(a=='B') v[1]++;
        else if(a=='C') v[2]++;
        cin>>b;
        if(b=='A') v[0]++;
        else if(b=='B') v[1]++;
        else if(b=='C') v[2]++;
        cin>>c;
        if(c=='A') v[0]++;
        else if(c=='B') v[1]++;
        else if(c=='C') v[2]++;
    }
    if(v[0]!=3)
    cout<<"A"<<endl;
    else if(v[1]!=3)
    cout<<"B"<<endl;
    else if(v[2]!=3)
    cout<<"C"<<endl;
}
    return 0;
}