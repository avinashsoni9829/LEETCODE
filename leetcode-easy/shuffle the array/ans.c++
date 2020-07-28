class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int l=0,r=n;
        vector<int>ans;

        while(l<n and r<2*n)
        {
            ans.push_back(nums[l]);
            l+=1;
            ans.push_back(nums[r]);
            r+=1;
        }
        return ans;

    }
};
