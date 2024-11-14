#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int len=s.length();
    int l=0;
    char a[26]={0};
    for(int i=0;i<len;i++){
        a[s[i]-'a']++;
    }
     for(int i=0;i<26;i++){
        if(a[i]>0){
           l++;
        }
    }



    if(l%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}