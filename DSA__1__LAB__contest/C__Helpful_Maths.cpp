#include <iostream>
using namespace std;
int main()
{

    string s;
    cin >> s;

    int length = s.length();

    int arr[length];
    int l = 0;

    for (int i = 0; i < length; i += 2)
    {
        arr[l++] = s[i] - '0';
    }

    for (int i = 0; i < l - 1; i++)
    {
        for (int j = 0; j < l - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < l; i++)

    {
        cout << arr[i];
        if (i < l - 1)
        {
            cout << "+";
        }
    }
    return 0;
}