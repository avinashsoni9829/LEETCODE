class Solution {
public:
    
    int leastInterval(vector<char>& tasks, int k) {
        
        map <int,int> mp;
        int n = tasks.size();
        int number_of_cycles = 0;
        
       
        
        for(int i=0;i<n;i++)
        {
            mp[tasks[i] - 'A'] += 1;
            number_of_cycles = max(number_of_cycles,mp[tasks[i] - 'A']);
        }
        
        int ans = (number_of_cycles - 1) * (k+1); // minimum length required to complete (m-1) cycles
        
        for(auto it : mp)
        {
            if(it.second == number_of_cycles)
                ans += 1;
        }
        
        ans = max(ans,n);
        return ans;
        
    }
};
