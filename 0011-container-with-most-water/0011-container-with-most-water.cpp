class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        //vector<int>ans;
        int start = 0;
        int end = height.size()-1 ;
        int sum =0;
        int max= 0;
        while(start<end)
        {
            sum = min(height[start],height[end])*(end-start);
            if(max<sum)
                max= sum;
            if(height[start]<height[end])
               start++;
            else
               end--;
        }
        return max;
    
               
    }
};