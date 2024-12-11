#include<bits/stdc++.h>

using namespace std;

struct Student {
    double cgpa;
    string name;
};

bool cmp (Student s1, Student s2) {
    if (s1.cgpa != s2.cgpa)
        return s1.cgpa > s2.cgpa;
    return s1.name < s2.name;
}

int main() {
    int n;
    cin >> n;
    Student st[n];
    for (int i = 0; i < n; i++) {
        double cgpa;
        string name;
        cin >> cgpa >> name;
        st[i].cgpa = cgpa;
        st[i].name = name;
    }
    sort(st, st+n, cmp);
    for (int i = 0; i < n; i++)
        cout << "Name: " << st[i].name << ", CGPA: " << st[i].cgpa << endl;
}
