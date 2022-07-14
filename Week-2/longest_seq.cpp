class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count=0,ans=0;
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++)  s.insert(nums[i]);
        
        for(auto i:s)
        {
            count=0;
            if(s.find(i-1)!=s.end())  continue;
            else
            {
               int num=i;
                while(1)
                {
                    if(s.find(num)!=s.end()) 
                    {
                        count++;
                        num=num+1;
                    }
                    else
                        break;
                }
                ans=max(ans,count);
  
             }
        }
                return ans;
    }
};