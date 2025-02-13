#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int count = 0;
    int four = 0;
    int three = 0;
    int two = 0;
    int one = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 4)
            four++;
        else if (arr[i] == 3)
            three++;
        else if (arr[i] == 2)
            two++;
        else if (arr[i] == 1)
            one++;
    }

    count += four;

    while (three > 0 && one > 0)
    {
        count++;
        three--;
        one--;
    }
    if (three)
        count += three;

    two = two*2 +one;

    count += (two+4-1) / 4;

    cout << count << endl;

    return 0;
}