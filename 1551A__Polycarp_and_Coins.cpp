#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int c1 = 0;
        int c2 = 0;

        int num=n;
        num=num/3;
        c1=num;
        c2=num;


        // if(n%3==1){
        //     c1++;
        // }
        // else if(n%3==2){
        //     c2++;

        // }


        if((c1+c2*2)==n)
        cout<<c1<<" "<<c2<<endl;
        else{
            if(((c1+1) + c2*2)==n){
                cout<<c1+1<<" "<<c2<<endl;
            }
            else{
                cout<<c1<<" "<<c2+1<<endl;
            }
        }



    }
    return 0;
}