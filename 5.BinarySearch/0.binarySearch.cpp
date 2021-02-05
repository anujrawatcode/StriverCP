#include <bits/stdc++.h>
using namespace std;

int main()
{
    // binary_search(start, end, find);
    vector<int> vec = {1, 4, 5, 8, 9};
    bool res = binary_search(vec.begin(), vec.end(), 3);
    cout << res << endl;
    bool res = binary_search(vec.begin(), vec.end(), 5);
    cout << res;
    // O(log N)

    ////////////////////////////////////////////////////////////
    // lower_bound(start, end, find)
    // if exist return pointer to he X
    // if not exist return pointer to immediate greater

    // lower_bound
    // return first occurance if it occur
    // return immediate greater to X if not occur
    int a[] = {1, 4, 5, 6, 9, 9};
    int n = 6;

    int ind = lower_bound(a, a + n, 4) - a; // [1] = 4
    cout << ind << endl;

    ind = lower_bound(a, a + n, 7) - a; // [4] = 9
    cout << ind << endl;

    ind = lower_bound(a, a + n, 10) - a; // [6] = end()
    cout << ind;

    ///////////////////////////////////////////////////////////
    // upper_bound(start, end, find)
    // return a pointer to immediate greater

    int a[] = {1, 4, 5, 6, 9, 9};
    int n = 6;

    int ind = upper_bound(a, a + n, 4) - a; // [2] = 5
    cout << ind << endl;

    ind = upper_bound(a, a + n, 7) - a; // [4] = 9
    cout << ind << endl;

    ind = upper_bound(a, a + n, 10) - a; // [6] end()
    cout << ind;
    /////////////////////////////////////////////////////////////

    //1. Find the first occurance of a X in a
    // sorted array. If it does not exits, print -1.

    int A[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
    int n = 9;
    int X = 4;

    int ind = lower_bound(A, A + n, X) - A;

    if (ind != n && A[ind] == X)
        cout << ind;
    else
        cout << -1;

    //////////////////////////////////////////////////////////////

    //2. Find the last occurance of a X in a
    // sorted array. If it does not exits, print -1.

    int B[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
    n = 9;
    X = 4;

    ind = upper_bound(B, B + n, X) - B - 1;
    if (B[ind] == X && ind != n)
        cout << ind;
    else
        cout << -1;

    //////////////////////////////////////////////////////////////
    //3. Find the largest number smaller than X in a sorted array
    // If No number exists print -1
    int C[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
    n = 9;
    X = 4;

    ind = lower_bound(C, C + n, X) - B;
    ind--;
    if (ind >= 0)
        cout << C[ind];
    else
        cout << -1;
    ///////////////////////////////////////////////////////////////
    // 4. Find the smallest number greater than X in
    // a sorted array. If no number exits print -1
    int D[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
    n = 9;
    X = 4;

    ind = upper_bound(D, D + n, X) - D;
    if (ind < n)
        cout << D[ind];
    else
        cout << -1;
}