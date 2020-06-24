/*

basically we compare the relative cost of the movement towards the cities




*/


class Solution {

  static bool comparator(vector<int>&a,vector<int>&b)
  {
    return a[1]-a[0]>b[1]-b[0];
  }
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {

      int n=costs.size();

      sort(costs.begin(),costs.end(),comparator);

      int res=0;

      for(int i=0;i<n;++i)
      {
        if(i>=n/2)
        res+=costs[i][1];
        else
        res+=costs[i][0];
      }

      return res;
      
        
    }
};
