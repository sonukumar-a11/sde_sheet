// Given an array, rotate the array by one position in clock-wise direction.
 

// Example 1:

// Input:
// N = 5
// A[] = {1, 2, 3, 4, 5}
// Output:
// 5 1 2 3 4

//Approach : itrate the element from backward section ad swap every eleemnt and put the last element in the first postion
#include<bits/stdc++.h>
#define loop(a,b) for(int i = a ; i < b;i++)
using namespace std;

void rotate(int arr[], int n)
{
    int first = arr[n-1];
    for(int i = n-2;i>=0;i--)
        arr[i+1] = arr[i];
    arr[0] = first;
}
int main()
{
    int n;cin>>n;
    int *arr = new int[n];
    loop(0 , n)
    {
        cin>>arr[i];
    }
    rotate(arr , n);
    for(int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }

}