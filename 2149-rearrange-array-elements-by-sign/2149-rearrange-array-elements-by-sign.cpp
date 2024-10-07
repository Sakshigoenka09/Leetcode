class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        int positive = 0 ;
        int negative = 1;
        vector<int>ans(nums.size(),0);
        for(int i =0 ; i<nums.size(); i++)
        {
            if(nums[i]>0)
            {
                ans[positive] = nums[i];
                positive = positive+2;
            }
            else
            {
                ans[negative] = nums[i];
                negative = negative+2;
            }
        }
        nums.clear();
        return ans;
    }
};