class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int i=0;
        while(i<nums.size())
        {
            int count=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                    count++;
            }
            if(count>1)
                return true;
            i++;
        }
        return false;
    }
};