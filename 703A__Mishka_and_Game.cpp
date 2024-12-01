#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int countA = 0 , countB = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
            countA++;
        else if (a < b)
            countB++;
    }

    if (countA > countB)
        cout << "Mishka" << endl;
    else if (countA < countB)
        cout << "Chris" << endl;
    else
        cout<<"Friendship is magic!^^" << endl;

    return 0;
}