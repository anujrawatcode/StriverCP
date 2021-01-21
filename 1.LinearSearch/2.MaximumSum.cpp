//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/maximum-sum-4-f8d12458/description/?layout=old
// You are given an array of integers A, you need to find the maximum sum that can
//be obtained by picking some non-empty subset of the array. If there are many such non-empty subsets,
//choose the one with the maximum number of elements. Print the maximum sum and the number of elements in the chosen subset.

// Input:

// The first line contains an integer N, denoting the number of elements of the array.
// Next line contains N space-separated integers, denoting the elements of the array.

// Output:

// Print 2 space-separated integers, the maximum sum that can be obtained by choosing some
// subset and the maximum number of elements among all such subsets which have the same maximum sum.

// Constraints:

// SAMPLE INPUT 
// 5
// 1 2 -4 -2 3
// SAMPLE OUTPUT 
// 6 3

#include<iostream>
using namespace std;

void solve(long arr[],long n)
{
	long flag=0;
	for(long i=0; i<n; i++)
	   if(arr[i]<0)
	     flag++;
	if(flag==n) // if all are -ve
	{
        long max=arr[0];
		for(int i=0; i<n; i++)
		   if(arr[i]>max)
		      max=arr[i];
		cout<<max<<" "<<1;
		return;
	}
	else
	{
		long sum=0;
		long cnt=0;
		for(long i=0; i<n; i++)
		{
			if(arr[i]>=0)
			{
				sum=sum+arr[i];
				cnt++;
			}
		}
		cout<<sum<<" "<<cnt;
		return;
	}
}
int main()
{
	long n;
	cin>>n;
	long arr[n];
	for(long i=0; i<n; i++)
	   cin>>arr[i];
	
	solve(arr, n);
}