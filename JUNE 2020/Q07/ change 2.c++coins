/*

time : O(coins*amount)

dp[c][a]=dp[c][a-c[i]]+dp[c-1][a];

1)include the coin
2) exclude the coin



*/


class Solution {
public:
    int change(int amount, vector<int>& coins) {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n=coins.size();

    int dp[n+1][amount+1];

    int i,j;
    
     /*  0 0 0 0 0 0   */
    for(int i=1;i<=amount ;++i)
    {
      dp[0][i]=0;
    }

    /*
      0
      0
      0
      0
      0
    */

    for(int i=0;i<=n;++i)
    dp[i][0]=1;  //exclude all the coins so no of step =1

    for(int i=1;i<=n;++i)
    {
      for(int j=1;j<=amount;++j)
      {
        if(j>=coins[i-1])
        dp[i][j]=dp[i][j-coins[i-1]]+dp[i-1][j];
        else
        dp[i][j]=dp[i-1][j];
      }
    }

    
    return dp[n][amount];
      
        
    }
};
