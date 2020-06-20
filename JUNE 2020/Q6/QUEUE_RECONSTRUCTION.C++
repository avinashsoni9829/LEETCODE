/*

 let  [x,y] be any element of the queue

 then y denotes the order of queue ( y = no of person >=x)

whenever count ==0 and is empty then place the element

sorting: nlogn
arrangement : O(n^2)

time complexity : O(n^2+nlogn)

*/

class Solution {
  static bool compartor(vector<int>& a,vector<int>& b)
    {
        if(a[0]==b[0])
            return a[1]<b[1];

        return a[0]<b[0];
    }
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
       	ios_base::sync_with_stdio(false);cin.tie(NULL);

        int n=people.size();
        sort(people.begin(),people.end(),compartor);

        vector<vector<int>>ans(n,vector<int>(2,-1));

        for(int i=0;i<n;++i)
        {
          int cnt=people[i][1];

          for(int j=0;j<n;++j)
          {
            if(ans[j][0]==-1 and cnt==0)
            {
              ans[j][0]=people[i][0];
              ans[j][1]=people[i][1];
              break;
            }
            else
            if(ans[j][0]==-1 or ans[j][0]>=people[i][0])
 
           {
              cnt-=1;
            }
          }
        }
        return ans;

    }
    
};
