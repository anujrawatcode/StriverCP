// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/maximum-occurrence-9/?layout=old


// You are given a string which comprises of lower case alphabets (a-z), upper case alphabets (A-Z), numbers, (0-9) and special characters like !,-.; etc.

// You are supposed to find out which character occurs the maximum number of times and the number of its occurrence, in the given string. If two characters occur equal number of times, you have to output the character with the lower ASCII value.

// For example, if your string was: aaaaAAAA, your output would be: A 4, because A has lower ASCII value than a.

// Input format:
// The input will contain a string.

// Output format:
// You've to output two things which will be separated by a space:
// i) The character which occurs the maximum number of times.
// ii) The number of its occurrence.

// Constraints:
// The maximum length of the string can be 1000.

// SAMPLE INPUT 
// Pulkit is a dog!!!!!!!!!!!!
// SAMPLE OUTPUT 
// ! 12


#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
	getline(cin, s);
    int n = 128;
    vector<int> vec(n, 0);

    for (int i = 0; i < s.length(); i++)
    {
        vec[s[i]]++;
    }
	
    int max = 0;
    char temp = NULL;
    for (int i = 0; i < 128; i++)
    {
        if (vec[i] > max)
        {
            max = vec[i];
            temp = i;
        }
    }

	cout<<temp<< " "<<max;
}