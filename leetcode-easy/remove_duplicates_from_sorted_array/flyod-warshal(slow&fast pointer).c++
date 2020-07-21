//slow and fast pointer

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int n=nums.size();
    if(n==0) return 0;

    int l=0;
    for(int i=1;i<n;++i)
    {
      if(nums[i]!=nums[l])
      {
        ++l;
        nums[l]=nums[i];
      }
    }
    return l+1;
    

    }
};
