// 287. Find the Duplicate Number
// Level :- Medium

// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.

//Example 1:

// Input: nums = [1,3,4,2,2]
// Output: 2
//Approach :- mark every element as visisted if same element repeted again that's the duplicate element;
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int n = nums.size();
        for(int i = 0; i <nums.size();i++)
        {
            nums[nums[i] % nums.size()] = nums[nums[i] % nums.size()] + nums.size();
        }

        for(int i = 0 ; i< n ; i++)
        {
            if(nums[i]/n > 1)
            {
                return i;
            }
        }
    }
};
int main()
{
    int n;cin>>n;
    vector<int> nums(n);
    for(int i =0 ;i < n; i++)
    {
        cin>>nums[i];
    }
    Solution Sol;
    int dupli = Sol.findDuplicate(nums);
    cout<<dupli<<endl;
}