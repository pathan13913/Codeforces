#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int arr[4] = {a, b, c, d};

    set<int> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
    int count = 4 - s.size();

    cout << count << endl;
    return 0;
}