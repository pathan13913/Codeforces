#include <bits/stdc++.h>
using namespace std;
int isPrime(int n)
{
    if (n < 2)
        return 0;
    if (n == 2)
        return 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int findNextPrime(int n)
{
    int ans;
    for (int i = n + 1; i <= 50; i++)
    {
        if (isPrime(i))
        {
            ans = i;
            break;
        }
    }
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int check__m = isPrime(m);
    int nextNumber = findNextPrime(n);


    if (check__m == 1 && nextNumber == m)
    {
        cout << "YES" << endl;
    }
    else    
    {
        cout<<"NO"<<endl;
    }

    return 0;
}