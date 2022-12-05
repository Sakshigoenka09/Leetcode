class Solution 
{
public:
    bool uniqueOccurrences(vector<int>& arr)
    {
        unordered_map<int,int>m,m1;
        for(int i = 0 ; i < arr.size() ;i++)
        {
            m[arr[i]]++;
        }
        for(auto it=m.begin(); it!=m.end();it++)
        {
                m1[it->second]++;
        }
       if(m.size()==m1.size())
           return true;
        else
            return false;
    }
};