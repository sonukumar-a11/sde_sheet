// Given an array of N integers arr[] where each element represents the max number of steps 
//that can be made forward from that element. 
// Find the minimum number of jumps to reach the end of the array (starting from the first element). 
// If an element is 0, then you cannot move through that element.
// Note: Return -1 if you can't reach the end of the array.


// Example 1:

// Input:
// N = 11 
// arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} 
// Output: 3 
// Explanation: 
// First jump from 1st element to 2nd 
// element with value 3. Now, from here 
// we jump to 5th element with value 9, 
// and from here we will jump to last


//Approach :- 
//T.C = and S.C = O(N)
#include<bits/stdc++.h>
#define max INT_MAX
using namespace std;
class Solution{


//Approach :- pick element itrate on that untill your reach the end
//T.C = and S.C = O(n)*value_of_particular index
    
//     int minJumphelper(int *arr , int n,int start)
//     {
//         if(start == n-1)
//         {
//             return 0;
//         }
//         int res = max;
//         for(int j = 1 ; j<=arr[start];j++)
//         {
//             res = min(res ,1 + minJumphelper(arr,n,start+j));
//         }
//         return res;
//     }
//   public:
//     int minJumps(int arr[], int n){
//         // Your code here
//         int output =  minJumphelper(arr,n,0);
//         return output;
//     }
public:
    int minJumps(int arr[] , int n)
    {
        int value_for_jumps = arr[0];
        int step = arr[0];
        int jump = 1;
        if (arr[0] == 0)
            return -1;
        for(int i = 1;i<n;i++)
        {
            if(i == n-1)
            {
                return jump;
            }
            if(arr[i] + i > value_for_jumps)
            {
                value_for_jumps = arr[i] + i ;
            
            }
            step --;
            if(step == 0)
            {
                jump++;
                step = value_for_jumps-i;
            }
        } 
        return jump;
    } 

};
//2 3 1 1 4 -> answer 2
//90 4 3 7 1 2 6 7 6 10 11 12:- 
// 0 1 1 1 1 - > -1 -> 1
int main()
{
    int n;cin>>n;
    int *arr = new int[n];
    for(int i =0 ;i < n; i++)
    {
        cin>>arr[i];
    }
    Solution Sol;
    int minjump = Sol.minJumps(arr , n);
    cout<<minjump<<endl;
}
