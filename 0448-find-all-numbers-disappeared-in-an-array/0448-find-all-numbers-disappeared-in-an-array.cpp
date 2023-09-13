class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
         unordered_set<int>map;
        vector<int>ans;
        for(auto num: nums)
        {
            map.insert(num);
        }
        
        for(int i = 1 ; i<=nums.size() ; i++)
        {
            if(map.find(i) == map.end() )
            ans.push_back(i);
        }
        return ans;
    }
};