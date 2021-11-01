//Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.

// Union of the two arrays can be defined as the set containing distinct elements from both the arrays.
// If there are repetitions,then only one occurrence of element should be printed in the union.
// 5 3
// 1 2 3 4 5
// 1 2 3
// Output: 
// 5
// Explanation: 
// 1, 2, 3, 4 and 5 are the
// elements which comes in the union set
// of both arrays. So count is 5

#include<bits/stdc++.h>
#define loop(a,b) for(int i = a; i < b ;i++)
using namespace std;
//Approach :- 
class Solution{

    
    //binery_search is function  use to search the element
    bool binery_search(int arr[] , int n , int element)
    {
        int l = 0 , r = n , mid = 0;
        while( l  < r)
        {
            mid = (l+r)/2;
            if(arr[mid] == element)
            {
                return true;
            }
            else if( arr[mid] > element)
            {
                r = mid -1 ;
            }
            else
            {
                l = mid+1;
            }
        }
        return false;
    }
    public:
    //Function to return the count of number of elements in union of two arrays.
    //Approach :- Search the element in both the array if not prsent include as union
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
       int count  = 0; 
       if(n <= m )
       {
           std::sort(a,a+n);
           for(int i = 0 ; i < (m || n) ; i++)
           {
               if(!binery_search(a,n,b[i]))
               {
                   count++;
               }
           }
       }
       else
       {
           std::sort(b,b+m);
           for(int i = 0 ; i < n ; i++)
           {
               if(!binery_search(b,m,a[i]))
               {
                   count++;
               }
           }
       }
       return count + min(n,m);
    }

    //Function to return the count of number of elements in union of two arrays.
    //Search the element in both the array if prsent include as intersection
    int dointersection(int a[] , int n , int b[] , int m)
    {
        //code here
       int count  = 0; 
       if(n <= m )
       {
           std::sort(a,a+n);
           for(int i = 0 ; i < m ; i++)
           {
               if(binery_search(a,n,b[i]))
               {
                   count++;
               }
           }
       }
       else
       {
           std::sort(b,b+m);
           for(int i = 0 ; i < n ; i++)
           {
               if(binery_search(b,m,a[i]))
               {
                   count++;
               }
           }
       }
       return count;
    }
};
int main()
{
    int n , m;
    cin>>n>>m;
    int *a = new int[n];
    int *b = new int[m];
    loop(0,n)
    {
        cin>>a[i];
    }
    loop(0 , m)
    {
        cin>>b[i];
    }
    Solution sol;
    int len_union = sol.doUnion(a,n,b,m);
    int len_intersection = sol.dointersection(a,n,b,m);
    cout<<"Union :" << len_union <<  " " <<"Intersection :" << len_intersection <<endl;
    
    delete [] a;
    delete [] b;
}