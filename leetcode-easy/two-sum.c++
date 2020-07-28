class Solution {
    #define all(z) z.begin(),z.end()
    #define pb push_back
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        vector<int>ans(2);
        int l=0,r=n-1;

        while(l<=r)
        {
            if(numbers[l]+numbers[r]==target)
            {
                ans[0]=(l+1);
                ans[1]=(r+1);
                return ans;
            }
            else
                if(numbers[l]+numbers[r]<target)
                {
                    l+=1;
                }
                else
                {
                    r-=1;
                }

        }

        return ans;

    }
};
