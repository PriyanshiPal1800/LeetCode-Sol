class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        auto it = lower_bound(nums.begin(), nums.end(), target);
        if(it!=nums.end() && *it==target)  return it-nums.begin();
        else 
        return it-nums.begin();
       
    }
};