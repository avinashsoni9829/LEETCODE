class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int overall_max=INT_MIN,current_max=0;

        for(auto x:nums)
        {
            current_max+=x;
            overall_max=max(overall_max,current_max);
            if(current_max<0)
            {
                current_max=0;
                continue;

            }
        }
        return overall_max;

    }
};
