
// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.


// Example 1:

// Input: 
// N = 5
// arr[]= {0 2 1 2 0}
// Output:
// 0 0 1 2 2
// Explanation:
// 0s 1s and 2s are segregated 
// into ascending order.

//Approach Try to put the right position which suitable for indivisually
//Time complexity :- O(N)
//space complexity :- O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void sort012(int a[], int n)
    {
       int low = 0 , mid = 0 , high = n-1;
       while(mid <= high)
       {
           switch (a[mid])
           {
                case 0:
                    swap(a[low++] , a[mid++]);
                    break;

                case 1:
                    mid++;
                    break;

                case 2:
                    swap(a[mid] , a[high--]);
                    break;
                default:
                    break;
           }
       }
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
    Solution sol;
    sol.sort012(arr,n);
    
    for(int i = 0; i < n ; i++){
        cout<< arr[i] << " ";
    }
    delete[] arr;

}