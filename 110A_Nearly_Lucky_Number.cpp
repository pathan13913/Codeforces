#include <iostream>
using namespace std;

void isnearly_lucky(int n)
{
int flag = 0;
    while (n > 0)
    {
       
        if (n % 10 == 4 || n % 10 == 7)
        {
            flag = 1;       
        }
        else{
            flag = 0;
        }
        n /= 10;
    }
    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main()
{
    long long int n;
    cin >> n;
    int lucky_count = 0;
    while (n > 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            lucky_count++;           
        }
        n /= 10;
    }
    
    isnearly_lucky(lucky_count) ;
    return 0;
}