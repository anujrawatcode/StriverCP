// Bishu went to fight for Coding Club. There were N soldiers with various powers. There will be Q rounds to fight and
// in each round Bishu's power will be varied. With power M, Bishu can kill all the soldiers whose power is less than
// or equal to M(<=M). After each round, All the soldiers who are dead in previous round will reborn.Such that in each
// round there will be N soldiers to fight. As Bishu is weak in mathematics, help him to count the number of soldiers that
// he can kill in each round and total sum of their powers.

// 1<=N<=10000
// 1<=power of each soldier<=100
// 1<=Q<=10000
// 1<=power of bishu<=100

// SAMPLE INPUT 
// 7
// 1 2 3 4 5 6 7
// 3
// 3
// 10
// 2
// SAMPLE OUTPUT 
// 3 6
// 7 28
// 2 3

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 10000000007
#define push_back pb

void solve(int n, vector<int> &vec, int q)
{
    int ind = upper_bound(vec.begin(), vec.end(), q) - vec.begin();
    cout << ind << " ";
    int sum = 0;
    for (int i = 0; i < ind; i++)
        sum += vec[i];
    cout << sum << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> power(n);
    int q;

    for (int i = 0; i < n; i++)
        cin >> power[i];
    sort(power.begin(), power.end());
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int temp;
        cin >> temp;
        solve(n, power, temp);
    }
    return 0;
} 