#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int p;
    cin >> p;
    int x[p];
    for (int i = 0; i < p; i++)
    {
        cin >> x[i];
    }

    int q;
    cin>>q;
    int y[q];
    for (int i = 0; i < q; i++)
    {
        cin >> y[i];
    }
    
    set<int> s;
    for (int i = 0; i < p; i++)
    {
        s.insert(x[i]);
       
    }
    for (int i = 0; i < q; i++)
    {
        s.insert(y[i]);
    }
    if (s.size() == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}