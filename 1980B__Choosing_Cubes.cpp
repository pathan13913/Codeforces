#include <bits/stdc++.h>
using namespace std;
int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> vec(n, 0);
        for (int i = 0; i < n; i++)
            cin >> vec[i];

        int fav = vec[f - 1];

        int countFav1 = count(vec.begin(), vec.end(), fav);

        sort(vec.begin(), vec.end(), greater<int>());

        int countFav2 = count(vec.begin() + k, vec.end(), fav);

        if (find(vec.begin() + k, vec.end(), fav) == vec.end())
            cout << "YES" << endl;
        else
        {
            if (countFav1 != countFav2)
                cout << "MAYBE" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}



/*


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        
        vector<int> vec(n);
        for (int &x : vec) cin >> x;  // Input array elements

        int fav = vec[f - 1];  // Favorite element

        int totalFav = count(vec.begin(), vec.end(), fav); // Total occurrences of fav

        sort(vec.rbegin(), vec.rend()); // Sort in descending order

        int remainingFav = count(vec.begin() + k, vec.end(), fav); // Fav count outside top k

        if (remainingFav == 0)
            cout << "YES" << endl;
        else if (totalFav != remainingFav)
            cout << "MAYBE" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}



*/