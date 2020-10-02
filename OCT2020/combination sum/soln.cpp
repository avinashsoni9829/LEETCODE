class Solution {
public:
    
    vector<vector<int>>ans;
    
    void helper(vector<int>candidates,int i,vector<int>&curr,int sum,int target){

        if(sum<0 || i>=candidates.size()){
            return;
        }
        
        if(sum>target){
            
            return;
            
        }
        
        if(sum==target){
            ans.push_back(curr);
            return;
        }
        
         for(int j=i;j<candidates.size();j++){
              sum+=candidates[j];
              curr.push_back(candidates[j]);
              helper(candidates,j,curr,sum,target);
              curr.pop_back();
              sum-=candidates[j];
         }
    return;
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int> curr;
        int sum=0;
        helper(candidates,0,curr,sum,target);
        return ans;
    }
};
