// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/mannas-first-name-4/description/?layout=old

// Manna is extremely disappointed to find out that no one in his college knows his first name.
// Even his classmates call him only by his last name. Frustrated,
//he decides to make his fellow college students know his first name by forcing them to solve this question.

// You are given a long string as input in each testcase, containing any ASCII character.
// Your task is to find out the number of times SUVO and SUVOJIT appears in it.

// Note: This problem must be solved in C language only.

// Input Format
// The first line contains the number of testcases, T. Next, T lines follow each containing a long string S.

// Output Format
// For each long string S, display the no. of times SUVO and SUVOJIT appears in it.

// Constraints

// 1 <= T <= 100
// 1 <= Length of each string <= 150
// SAMPLE INPUT
// 3
// SUVOJITSU
// 651SUVOMN
// $$$$$SUVOSUVOJIT$$$$$

// SAMPLE OUTPUT
// SUVO = 0, SUVOJIT = 1
// SUVO = 1, SUVOJIT = 0
// SUVO = 1, SUVOJIT = 1

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int t1 = 0;
    int t2 = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        //SUVOJITSU
        if (s[i] == 'S' && s[i + 1] == 'U' && s[i + 2] == 'V' && s[i + 3] == 'O' && s[i + 4] == 'J' && s[i + 5] == 'I' && s[i + 6] == 'T')
        {
            t1++;
            continue;
        }
        if (s[i] == 'S' && s[i + 1] == 'U' && s[i + 2] == 'V' && s[i + 3] == 'O')
        {
            t2++;
            continue;
        }
    }
    cout << "SUVO = " << t2 << ", SUVOJIT = " << t1 << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve();
    return 0;
}