// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

// Given an array of integers. Find the Inversion Count in the array. 

// Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. 
// If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then 
// the inversion count is the maximum. 
// Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
 
// Example 1:

// Input: N = 5, arr[] = {2, 4, 1, 3, 5}
// Output: 3
// Explanation: The sequence 2, 4, 1, 3, 5 
// has three inversions (2, 1), (4, 1), (4, 3).

// Example 2:

// Input: N = 5
// arr[] = {2, 3, 4, 5, 6}
// Output: 0
// Explanation: As the sequence is already 
// sorted so there is no inversion count.

// Example 3:

// Input: N = 3, arr[] = {10, 10, 10}
// Output: 0
// Explanation: As all the elements of array 
// are same, so there is no inversion count.
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long
class Solution{
    
    
    public:
    lli merge_sort(ll arr[] , int si , int ei)
    {
        if(si < ei)
        {
    
            lli count  = 0 ;
            int mid = si+(ei-si)/2;
            lli count_left=merge_sort(arr,si,mid);
            lli count_right=merge_sort(arr,mid+1,ei);
            count=merge(arr,si,mid,ei);
            return count_left+count_right+count;
        }
        
    }
    lli merge(ll arr[] , int si , int mid , int ei)
    {
        lli count  = 0 ;
        int i = si , j = mid , k = 0 ;
        ll temp[ei-si+1];

        while(i < mid and j <= ei)
        {
            if(arr[i] <= arr[j])
            {
                temp[k++] = arr[i++];
            }
            else
            {
                temp[k++] = arr[j++];
                count+= mid - i;
            }
        }
        while(i < mid)
        {
            temp[k++]=arr[i++];
        }
        while(j <= ei)
        {
            temp[k++]=arr[j++];
        }
        for(int i = si , k=0;i<si;i++,k++)
        {
            arr[i] = temp[k];
        }
        
        return count;
    }
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    lli inversionCount(ll arr[], ll N)
    {
        // Your Code Here
        lli count = merge_sort(arr,0,int(N));
        return count;
    }

};
// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends