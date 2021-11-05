// Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and 
//return an array of the non-overlapping intervals that cover all the intervals in the input.

 

// Example 1:

// Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
// Output: [[1,6],[8,10],[15,18]]
// Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].

// Example 2:

// Input: intervals = [[1,4],[4,5]]
// Output: [[1,5]]
// Explanation: Intervals [1,4] and [4,5] are considered overlapping
#include<bits/stdc++.h>
using namespace std;
// bool compare(vector<int> a , vector<int> b)
// {
//     return a[1]<b[1];
// }
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(),intervals.end());
        vector<vector<int>> output;
        if(output.empty())
        {
            output.push_back(intervals[0]);
        }

        int index = 0;
        for(int i = 1; i<intervals.size();i++)
        {
            if(output[index][1] >= intervals[i][0])
            {
                output[index][1] = max(intervals[i][1],output[index][1]);
            }
            else
            {
                output.push_back(intervals[i]);
                index++;
            }

        }
        return output;
    }
};
int main()
{
    vector<vector<int>> intervals{
        {1,3},
        {2,6},
        {8,10},
        {15,18}
    };
    Solution sol;
    vector<vector<int>> result  = sol.merge(intervals);
    for(auto x: result)
    {
        for(auto y: x)
        {
            cout<<y<<" ";
        }
    };
}
