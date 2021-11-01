// Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) 
//which has the maximum sum and return its sum.


// Example 1:
// Input:
// N = 5
// Arr[] = {1,2,3,-2,5}
// Output:
// 9
// Explanation:
// Max subarray sum is 9 of elements (1, 2, 3, -2, 5) which is a contiguous subarray.


//Approach :- 
#include<bits/stdc++.h>
#define loop(a,b) for(int i = a ; i < b;i++)
#define int long long
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        int max_previous = INT_MIN ,max_till_here = 0;
        loop(0 , n)
        {
            max_till_here += arr[i];
            if(max_till_here > max_previous)
            {
                max_previous = max_till_here;
            }
            if(max_till_here < 0)
            {
                max_till_here = 0;
            } 
        }
        return max_previous;
    }
};
int32_t main()
{
    int n;cin>>n;
    int *arr = new int[n];
    for(int i =0 ;i < n; i++)
    {
        cin>>arr[i];
    }
    Solution sol;
    int max_sum = sol.maxSubarraySum(arr,n);
    cout<<max_sum<<endl;
}
