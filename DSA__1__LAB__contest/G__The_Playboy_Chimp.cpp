#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int ladyHeights[N];

    for (int i = 0; i < N; i++)
    {
        cin >> ladyHeights[i];
    }

    int Q;
    cin >> Q;
    int luchuHeights[Q];

    for (int i = 0; i < Q; i++)
    {
        cin >> luchuHeights[i];
    }

    for (int i = 0; i < Q; i++)
    {
        int lowHigh = -1;
        int highHigh = -1;

        for (int j = 0; j < N; j++)
        {

            if (luchuHeights[i] > ladyHeights[j])
            {
                lowHigh = ladyHeights[j];
            }
            if (luchuHeights[i] < ladyHeights[j])
            {
                highHigh = ladyHeights[j];
                break;
            }
        }

        if (lowHigh == -1)
        {
            cout << "X ";
        }
        else
        {
            cout << lowHigh << " ";
        }
        if (highHigh == -1)
        {
            cout << "X" << endl;
        }
        else
        {
            cout << highHigh << endl;
        }
    }

    return 0;
}