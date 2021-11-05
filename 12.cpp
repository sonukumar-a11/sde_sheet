// Given two sorted arrays arr1[] of size N and arr2[] of size M. Each array is sorted in non-decreasing order. 
//Merge the two arrays into one sorted array in non-decreasing order without using any extra space.


// Example 1:

// Input:
// N = 4, M = 5
// arr1[] = {1, 3, 5, 7}
// arr2[] = {0, 2, 6, 8, 9}
// Output: 0 1 2 3 5 6 7 8 9
// Explanation: Since you can't use any 
// extra space, modify the given arrays
// to form 
// arr1[] = {0, 1, 2, 3}
// arr2[] = {5, 6, 7, 8, 9}
// { Driver Code Starts

//Approach :- itrate first from last and check if last element is greter means required swap and same for every element 
//After complete the process sort both the array
//T.C : -O(M+N) +O(NLOGN)
//S.C = O(1)
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
        int i = n-1,j = 0;

        while(i < n and j < m)
        {
           if(arr1[i] > arr2[j])
           {
                swap(arr1[i--] , arr2[j++]);
                
           }
           else
           {
               break;
           }
        }
        sort(arr1,arr1+n);
        sort(arr2,arr2+m);
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends

