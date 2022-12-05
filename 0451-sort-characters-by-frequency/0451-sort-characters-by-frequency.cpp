class Solution 
{
public:
    string frequencySort(string s) 
    {
        int n = s.length();
        string s1="";
        map<char,int>m;
       
        vector<pair<int,char>>v;
        
        for(int i = 0 ; i < n ; i++)
        {
            m[s[i]]++;
        }
        for(auto itr = m.begin();itr!=m.end();itr++)
        {
            
            v.push_back({itr->second,itr->first});
        }
        sort(v.begin(),v.end(),greater<pair<int,char>>());
        for(auto it = v.begin();it!=v.end(); it++)
        {
            s1 = s1+string(it->first,it->second);
        }
       
    
       return s1;
    }
    
};