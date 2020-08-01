class Solution {
public:
    int findMin(vector<int>& nums) {
        
        vector <int>ans;
        for(auto x:nums)
            ans.push_back(x);
        for(auto x:nums)
            ans.push_back(x);
        
        
        for(int i=0;i<ans.size()-1;++i)
        {
            if(ans[i+1]<ans[i])
            {
                return ans[i+1];
            }
        }
     return ans[0];   
    }
};
