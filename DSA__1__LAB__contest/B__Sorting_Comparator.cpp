#include <bits/stdc++.h>
using namespace std;

struct Person
{
    string name;
    int score;
};

bool cmp(Person a, Person b)
{

    if (a.score > b.score)
        return true;
    else if (a.score < b.score)
        return false;
    else
    {
        if (a.name < b.name)
            return true;
        else
            return false;
    }
}

int main()
{
    int n;
    cin >> n;
    Person p[n];

    for (int i = 0; i < n; i++)
    {
        cin >> p[i].name >> p[i].score;
    }

    sort(p, p + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << p[i].name << " " << p[i].score << endl;
    }

    return 0;
}