class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        ios::sync_with_stdio(false); cin.tie(0);
        int n = nums.size();
        vector<int> res;
        for (int num : nums) {
            int ind = abs(num)-1;
            if(nums[ind]<0) res.push_back(ind+1);
            else nums[ind]*=-1;
        }
        return res;
    }
};
