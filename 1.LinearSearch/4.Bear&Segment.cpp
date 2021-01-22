// Bear Limak has a string S. Each character of S is a digit '0' or '1'.

// Help Limak and check if all the '1' digits form a single non-empty segment
//(consecutive subsequence) in the string. For each test case, print "YES" or "NO" accordingly.

// Input
// The first line of the input contains an integer T denoting the number of test cases.
// The description of T test cases follows.

// The only line of each test case contains one string S, consisting of digits '0' and '1' only.

// Output
// For each test case, output a single line containing the answer — "YES"
// if all the '1' digits form a single non-empty segment, and "NO" otherwise. Don't print the quotes.

// Constraints
// 1 ≤ T ≤ 10
// 1 ≤ |S| ≤ 105 (here, |S| denotes the length of S)
// Subtasks
// Subtask #1 (50 points): 1 ≤ |S| ≤ 50
// Subtask #2 (50 points): Original constraints.
// Example
// Input:
// 6
// 001111110
// 00110011
// 000
// 1111
// 101010101
// 101111111111

// Output:
// YES
// NO
// NO
// YES
// NO
// NO

// Bear Limak has a string S. Each character of S is a digit '0' or '1'.

// Help Limak and check if all the '1' digits form a single non-empty segment
//(consecutive subsequence) in the string. For each test case, print "YES" or "NO" accordingly.

// Input
// The first line of the input contains an integer T denoting the number of test cases.
// The description of T test cases follows.

// The only line of each test case contains one string S, consisting of digits '0' and '1' only.

// Output
// For each test case, output a single line containing the answer — "YES"
// if all the '1' digits form a single non-empty segment, and "NO" otherwise. Don't print the quotes.

// Constraints
// 1 ≤ T ≤ 10
// 1 ≤ |S| ≤ 105 (here, |S| denotes the length of S)
// Subtasks
// Subtask #1 (50 points): 1 ≤ |S| ≤ 50
// Subtask #2 (50 points): Original constraints.
// Example
// Input:
// 6
// 001111110
// 00110011
// 000
// 1111
// 101010101
// 101111111111

// Output:
// YES
// NO
// NO
// YES
// NO
// NO

#include <bits/stdc++.h>
using namespace std;

void solve(string arr)
{
    int n = arr.length();
    int cnt = 0;
    int jnt = 0;

    for (int i = 0; i < n; i++)
        if (arr[i] == '1')
            cnt++;

    for (int i = 0; i < n ; i++)
    {
        if (arr[i] == '1')
        {
            jnt++;
            if (arr[i + 1] == '0')
                break;
        }
    }
    if (cnt == jnt && cnt!=0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        string s;
        cin >> s;
        solve(s);
    }
}