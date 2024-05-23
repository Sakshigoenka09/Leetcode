class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int ans=0;
        map<int,int>mp;
        for(auto i : nums)
        {
            mp[i]++;
        }
        
        for(auto pair: mp)
        {
            nums[ans++]= pair.first;
            
        }
        return ans;
    }
};