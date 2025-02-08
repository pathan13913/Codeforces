#include <bits/stdc++.h>
using namespace std;
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    //     ios_base::sync_with_stdio(false);
    //     cin.tie(NULL);
    //     cout.tie(NULL);

    int arr[5][5];
    int x, y;
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            cin >> arr[i][j];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    if (x == 2 && y == 2)
        cout << "0" << endl;
    else
    {
        while (x != 2 || y != 2)
        {
            if (x > 2)
            {
                x--;
                count++;
            }
            else if (x < 2)
            {
                x++;
                count++;
            }
            if (y > 2)
            {
                y--;
                count++;
            }
            else if (y < 2)
            {
                y++;
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}

/*





#include <iostream>
using namespace std;

int main() {
    int arr[5][5];
    int x, y, count = 0;

    // Input the 5x5 matrix
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {  // Find the position of 1
                x = i;
                y = j;
            }
        }
    }

    // Calculate the number of moves required to reach the center (2, 2)
    count = abs(x - 2) + abs(y - 2);

    cout << count << endl;  // Output the result

    return 0;
}








*/