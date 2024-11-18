#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        int x=0,y=0;

        while(x<num){
           
            if(y%3!=0 && y%10 !=3){
                x++;
            }
           y++;

        }
     
        

        cout<< y-1<< endl;
    }

    return 0;
}