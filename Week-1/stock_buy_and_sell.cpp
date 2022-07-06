class Solution {
public:
    int maxProfit(vector<int>& a) {
        int maxi=0,min=INT_MAX;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]<min)  min=a[i];
            if(a[i]-min>maxi) maxi=a[i]-min;
            
        }
        return maxi;
    }
};