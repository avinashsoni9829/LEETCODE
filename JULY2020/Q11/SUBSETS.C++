class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<vector<int>>ans(1,vector<int>(0));
      for(int i=0;i<nums.size();++i)
      {
        int s=ans.size();
        for(int j=0;j<s;++j)
        {
          vector<int>temp=ans[j];
          tmp.push_back(nums[i]);
          ans.push_back(tmp);
        }
      }
      return ans;
        
    }
};
