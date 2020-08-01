class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        
        if(k==n) return nums;
            
        vector<int>ans;
        
        sort(nums.begin(),nums.end());
        // lambada function 
        auto cmp=[](pair<int,int>&a,pair<int,int>&b)
        {
            return a.second<b.second;
        };
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,decltype(cmp)>pq(cmp);
        
        int x=nums[0],pos=0;
        
        for(int i=0;i<n;++i)
        {
            if(nums[i]!=x)
            {
                pq.push({x,i-pos});
                x=nums[i];
                pos=i;
            }
        }
        pq.push({nums.back(),n-pos});
        
        
        for(int i=0;i<k;++i)
        {
            ans.push_back(pq.top().first);
            pq.pop();
        }
        
        return ans;
    }
};
