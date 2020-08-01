class Solution {
public:

/*

    total Profit Earned =(selling_price-cost_price)
    each time the person has two options 
    
    
    either to buy the stock on that day 
    or not buy the stock on that day 
    the boolean buy tells that 
    
    so the ans would be maximum of two cases
*/

static const int limit=1e6;

int dp[limit][2];

int solve(vector<int>& prices,int curr,int n,bool buy){
    
    if(curr>=n)
        return 0;
    if(~dp[curr][buy])
        return dp[curr][buy];
    
    if(buy){
        return dp[curr][buy]=max(prices[curr]+solve(prices,curr+2,n,false),solve(prices,curr+1,n,true));
    }// u sold the stock and you dont wish to buy the next stock as there must be cool down of 1 unit 
    else{
        return dp[curr][buy]=max(-prices[curr]+solve(prices,curr+1,n,true),solve(prices,curr+1,n,false));
    }
}



int maxProfit(vector<int>& prices) {
    
    bool buy=false;
    
    int n=prices.size();
    
    memset(dp,-1,sizeof(dp));
    
    return solve(prices,0,n,buy);    
    
}
};
