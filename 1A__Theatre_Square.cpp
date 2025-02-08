#include <iostream>
using namespace std;
 
int main() {
    long long n, m, a;
    cin >> n >> m >> a;
 
    // Calculate the number of tiles needed along each dimension
    long long tiles = ((n + a - 1) / a) * ((m + a - 1) / a);
 
    cout << tiles << endl;
 
    return 0;
}  






