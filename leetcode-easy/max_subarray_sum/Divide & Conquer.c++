class Solution {
  int f(vector<int>&nums,int low,int mid,int high)
  {
    int sum=0;
    int lsum=INT_MIN;
    for(int i=mid;i>=low;--i)
    {
      sum+=nums[i];
      lsum=max(lsum,sum);
    }
    sum=0;
    int rsum=INT_MIN;
    for(int i=mid+1;i<=high;++i)
    {
      sum+=nums[i];
      rsum=max(rsum,sum);
    }

    return max({lsum,rsum,lsum+rsum});
  }

  int ans(vector<int>&nums,int low,int high)
  {
    if(low==high)
    return nums[low];

    int mid=low+(high-low)/2;
    return max({ans(nums,low,mid),ans(nums,mid+1,high),f(nums,low,mid,high)});
  }

public:
    int maxSubArray(vector<int>& nums) {

        return ans(nums,0,nums.size());
    }
};
