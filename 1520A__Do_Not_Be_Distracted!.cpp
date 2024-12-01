#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string tasks;
        cin >> tasks;

        bool seen[26] = {false};
        bool suspicious = false;

        for (int i = 0; i < n; i++)
        {
            if (seen[tasks[i] - 'A'])
            {

                if (tasks[i] != tasks[i - 1])
                {
                    suspicious = true;
                    break;
                }
            }
            seen[tasks[i] - 'A'] = true;
        }

        if (suspicious)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
