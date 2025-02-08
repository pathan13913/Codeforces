#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
    string s1=".";
    for(int i=0;i<s.size();i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y'){
            s1+=s[i];
            s1+='.';
        }
    }
    s1.erase(s1.size()-1);
    cout<<s1<<endl;

    return 0;
}