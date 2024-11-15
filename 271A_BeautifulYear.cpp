#include <iostream>
using namespace std;
int main()
{
    int year, a, b, c, d;
    cin >> year;
    year++;
    int num[4];

    while (1)
    {

        int find = year;
        for (int i = 0; i < 4; i++)
        {
            num[3 - i] = find % 10;
            find /= 10;
        }

        a = num[0];
        b = num[1];
        c = num[2];
        d = num[3];

        if ((a == b) || (a == c))

        {

            year++;
        }
        else if ((a == d) || (b == c))
        {
            year++;
        }
        else if ((b == d) || (c == d))
        {
            year++;
        }
        else
        {
            cout << year << endl;
            break;
        }
    }
}
