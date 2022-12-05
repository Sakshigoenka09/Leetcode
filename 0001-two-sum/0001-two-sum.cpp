class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int>ar;
        int i = 0 , j = 0;
        for(int i = 0; i < nums.size() ; i++)
        {
           int tar = target - nums[i];
            for(int j = i+1 ; j  <nums.size() ; j++)
            {
                if(tar==nums[j])
                {
                    ar.push_back(i);
                    ar.push_back(j);
                    break;
                }
                
            }
            
                
                
        }
        return ar;
        
    }
};