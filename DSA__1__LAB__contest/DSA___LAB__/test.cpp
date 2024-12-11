#include <bits/stdc++.h>

using namespace std;

struct Complex {
    double real;
    double img;
};

double magnitude(Complex c) {
    return sqrt(c.real*c.real+c.img*c.img);
}

bool cmp (Complex c1, Complex c2) {
    return magnitude(c1) < magnitude(c2);
}

int main() {
    Complex arr[5];
    arr[0].real = 1; arr[0].img = 1;
    arr[1].real = 1; arr[1].img = 2;
    arr[2].real = 1; arr[2].img = 4;
    arr[3].real = 0; arr[3].img = 6;
    arr[4].real = 2; arr[4].img = 0;
    for (int i = 0; i < 5; i++)
        cout << arr[i].real << '+' << arr[i].img << 'i' <<endl;
    sort(arr, arr+5, cmp);
    cout << endl;
    for (int i = 0; i < 5; i++)
        cout << arr[i].real << '+' << arr[i].img << 'i' <<endl;

}
