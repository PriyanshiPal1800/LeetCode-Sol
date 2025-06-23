/*
PROBLEM STATEMENT : 

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

COMPLEXITY:

Time	O(n log n)
Space	O(n)
*/
#include<algorithm>
#include <iterator>
#include<vector>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int sum,flag1=0,flag2=0;
        vector<int> n2=nums;
        sort(nums.begin(), nums.end());
        
        while(start<end){
        sum=nums[start]+nums[end];
        if(sum==target)
           break;
        else if (sum>target)
            end--;
        else if (sum<target)
            start++;
        } 

        for(int i=0;i<nums.size();i++)
        {
            if(nums[start]==n2[i] && flag1==0)
                {start=i;flag1=1;}
            else if(nums[end]==n2[i]&& flag2 ==0)
                {end=i;flag2=1;}
        }
        return {start,end};
    }
   
};
