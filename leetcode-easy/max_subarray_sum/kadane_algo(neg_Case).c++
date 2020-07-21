class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int n=nums.size();
        int overall_max=nums[0],current_max=nums[0];
        for(int i=1;i<n;++i)
        {
          current_max=max(nums[i],current_max+nums[i]);
          overall_max=max(overall_max,current_max);
        }
        return overall_max;

    }
};
