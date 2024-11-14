#include<iostream>
using namespace std;    
int main()
{
    int n;
    cin>>n;
    char ch[n];
    cin>>ch;
    int a=0,d=0;
    for(int i=0;i<n;i++)
    {
       if(ch[i]=='A'|| ch[i]=='a'){
        a++;
       }else{
           d++;
       }
    }
    if(a>d){
        cout<<"Anton";
    }else if(d>a){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }
    
}