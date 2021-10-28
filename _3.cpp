//Given an array arr[] and an integer K where K is smaller than size of array, the task is to 
//find the Kth smallest element in the given array. It is given that all array elements are distinct.
#include<bits/stdc++.h>
#define mpqi priority_queue<int , vector<int> , greater<int> > 
#define Loop(a,b) for(int i = (a) ; i < b ; i++)
using namespace std;
//Approach :- Store the element as min element and filter also work through it
int ksmallest(vector<int>& array , int k)
{
    mpqi smallest;
    Loop(0,array.size()){
        smallest.push(array[i]);
    }
    int count = 0;
    while(!smallest.empty() and (count) < k-1)
    {
        count++;
        smallest.pop();
    }
    return smallest.top();
}
int main()
{
    int n;
    cin>>n;
    vector<int> array(n);
    for(int i = 0; i < n ; i++)
    {
        cin>>array.at(i);
    }
    int k;cin>>k;
    int answer = ksmallest(array , k);
    cout<< answer <<endl;
}