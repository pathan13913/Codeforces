// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int sum = 0;
//     int sign = -1;
//     for (int i = 1; i <= n; i++)
//     {
//        sum= sum + sign*i;
//        sign*=-1;


//     }
//     cout << endl<< sum;
//     return 0;
// }

#include<iostream>
using namespace std;

int main()
{
    long long n,sum=0;
    cin>>n;
    if(n%2 == 0)
    {
        sum=n/2;
    }
    else
    {
        sum=-((n/2)+1);
    }
    cout<<sum<<endl;
    return 0;
}