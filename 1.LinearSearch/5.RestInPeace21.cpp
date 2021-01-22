// Every time you come across a number, Little Jhool carefully manipulates it.
// He doesn't want you to face numbers which have "21" as a part of them.
// Or, in the worst case possible, are divisible by 21.

// If you end up facing such a number you feel sad... and no one wants that - because you start
// chanting "The streak is broken!" , if the number doesn't make you feel sad, you say,
// "The streak lives still in our heart!"

// Help Little Jhool so that he can help you!

// Input Format:
// The first line contains a number, t, denoting the number of test cases.
// After that, for t lines there is one number in every line.

// Output Format:
// Print the required string, depending on how the number will make you feel.

// Constraints:
// 1 ≤ t ≤ 100
// 1 ≤ n ≤ 1000000

// enter image description here

// SAMPLE INPUT 
// 3
// 120
// 121
// 231

// SAMPLE OUTPUT 
// The streak lives still in our heart!
// The streak is broken!
// The streak is broken!

#include <bits/stdc++.h>
using namespace std;

bool digitHave(int n)
{
    while (n != 0)
    {
        int temp = n % 100;
        if (temp == 21)
            return true;
        n = n / 10;
    }
    return false;
}
void solve(int n)
{
    if (n % 21 == 0 || digitHave(n))
    {
        cout << "The streak is broken!" << endl;
        return;
    }
    cout << "The streak lives still in our heart!" << endl;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        solve(n);
    }
}