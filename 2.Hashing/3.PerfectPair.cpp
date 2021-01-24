// partially accepted
#include <bits/stdc++.h>
using namespace std;

void perfectSquares(float l, float r, unordered_set<int> &Psqr)
{

    for (int i = l; i <= r; i++)
    {
        if (sqrt(i) == (int)sqrt(i))
            Psqr.insert(i);
    }
}

void printCubes(int a, int b, unordered_set<int> &Pcbs)
{
    for (int i = a; i <= b; i++)
    {
        for (int j = 1; j * j * j <= i; j++)
        {
            if (j * j * j == i)
            {
                Pcbs.insert(j * j * j);
                break;
            }
        }
    }
}

void solve(vector<int> &vec, int n)
{
    int cnt=0;
    unordered_set<int> Psqr;
   // unordered_set<int> Pcbs;

    perfectSquares(1, 2000, Psqr);
    printCubes(1, 2000, Psqr);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = vec[i] + vec[j];
            if (Psqr.count(temp)!=0)
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}
int main()
{
    int t;
    cin >> t;
    for (int z = 1; z <= t; z++)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];
        solve(vec, n);
    }
}