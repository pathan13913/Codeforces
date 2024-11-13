#include <iostream>
using namespace std;
int main()
{

    int t, count = 0;
    cin >> t;
    int a, b;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if (a % b != 0)
        {
            count= b- a%b;

        }
        else{
            count=0;
        }
       
        cout << count << endl;
    }

   
}