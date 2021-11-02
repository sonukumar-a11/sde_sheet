// Given an array arr[] denoting heights of N towers and a positive integer K, 
// you have to modify the height of each tower either by increasing or decreasing them by K only once. 
// After modifying, height should be a non-negative integer. 
// Find out what could be the possible minimum difference of the height of shortest and longest towers 
// after you have modified each tower.

// A slight modification of the problem can be found here.


// Example 1:

// Input:
// K = 2, N = 4
// Arr[] = {1, 5, 8, 10}
// Output:
// 5
// Explanation:
// The array can be modified as 
// {3, 3, 6, 8}. The difference between 
// the largest and the smallest is 8-3 = 5.


//Approach :- find the max and min till now afterward try tp compare and store minimum difference from previous one
//Time Complexity = O(N)
//space complexity = O(1)
#include<bits/stdc++.h>
#define loop(a,b) for(int i = a ; i < b;i++)
using namespace std;
class Solution
{
    public:
    int minimize_height(int *arr , int n , int k)
    {
        int max_till,min_till;
        sort(arr,arr+n);
        int default_diff = arr[n-1] - arr[0];
        loop(1,n)
        {
            max_till = max( arr[n-1]- k ,arr[i-1]+k );
            min_till = min(arr[0]+k , arr[i]-k);
            default_diff = min(default_diff , max_till-min_till);
        }
        return default_diff;
    }
};
int main()
{
    int n;cin>>n;
    int *arr = new int[n];
    for(int i =0 ;i < n; i++)
    {
        cin>>arr[i];
    }
    int k;cin>>k;
    Solution sol;
    int min_high = sol.minimize_height(arr,n,k);
    cout<<min_high<<endl;
}
