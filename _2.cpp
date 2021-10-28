//Write a C function to return minimum and maximum in an array. 
//Your program should make the minimum number of comparisons.

//Approach :-
//every itration we will store the both max and min
#include<bits/stdc++.h>
#define pii pair<int,int>
#define Loop(a,b) for(int i = a ; i < b ; i++) 
using namespace std;
pii min_Max(vector<int>&array) 
{
    pii answer{array[0] ,array[0]};
    Loop(1,array.size())
    {
        if(array[i] > answer.second)
        {
            answer.second = array[i];
        }
        else if (array[i] < answer.second and array[i] < answer.first)
        {
            answer.first = array[i];       
        }
        
    }
    return answer;

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
    pii result = min_Max(array);
    cout <<"Min element: " <<  result.first << " " << "Max_element: " << result.second;
}