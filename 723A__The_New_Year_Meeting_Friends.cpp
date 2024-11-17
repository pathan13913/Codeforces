#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z,max;

    cin >> x >> y >> z;
    int a=abs(x-y);
    int b=abs(y-z);
    int c=abs(z-x);
  
    max=a>b?a:b;
    max=max>c?max:c;
 
    cout << max << endl;
    return 0;
}