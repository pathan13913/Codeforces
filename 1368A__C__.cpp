#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, n;
        cin >> a >> b >> n;

        int count = 0;
        while (max(a, b) <= n)
        {
            if (a > b)
                swap(a, b); 
            a += b;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}
