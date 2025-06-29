class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++)
        s.insert(nums[i]);
        int k= s.size();
        auto it=s.begin();
        for(int i=0;i<k;i++)
        {nums[i]=*it;
         *it++;}
    return k;
    }
};