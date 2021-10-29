//Move all negative numbers to beginning and positive to end with constant extra space

//Approach :- When you are getting any positiove number try to swa[ whatever the correct postion for that
//Complexity :- Time Complexity :- O(N) and space Complexity:- O(N)
#include<bits/stdc++.h>
using namespace std;
void move(vector<int>& array)
{
    int n = array.size();
    int count = 0;
    for (int i = 0; i< n ; i++)
    {
        if (array[i] < 0)
        {
            swap(array[i] , array[count++]);
        }
    }
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

    move(array);
    for_each(array.begin() , array.end() , [&](int i)
    {
        cout<< i <<" ";
    });

}
