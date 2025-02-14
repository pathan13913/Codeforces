



#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(long long int num) {
    if (num <= 1) return false;
    for (long long int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long int num;
        cin >> num;

        // Check if num is a perfect square
        long long int sqrtNum = sqrt(num);
        if (sqrtNum * sqrtNum == num && isPrime(sqrtNum)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}






/*

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long int  num;
        cin >> num;
        int count = 0;
        long long int zerooo = 0;
        for (long long int  i = 1; i <= num; i++)
        {
            if (num % i == zerooo)
                count++;
            if (count > 3)
                break;
        }
        if (count == 3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

/*



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long int num;
        cin >> num;
        int count = 0;

        // Loop through numbers from 1 to sqrt(num)
        for (long long int i = 1; i * i <= num; i++) {
            if (num % i == 0) {
                if (i * i == num) { // If it's a perfect square
                    count++; // Only one divisor (i)
                } else {
                    count += 2; // i and num / i are divisors
                }
            }

            // If we already have more than 3 divisors, no need to check further
            if (count > 3) {
                break;
            }
        }

        // Output result based on divisor count
        if (count == 3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}










*/