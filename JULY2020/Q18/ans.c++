class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> mp(numCourses,0),result;
        int n_edges = prerequisites.size();
        
        for(int i = 0 ; i  < n_edges ; i++)mp[prerequisites[i][0]]++;
        
        bool flag = true;
        while(flag){
        	flag = false;
        	for(int i = 0 ; i < numCourses ; i++){
            	if(mp[i]==0){
            		flag = true;
                	mp[i]=-1;
                	result.push_back(i);
                	for(int j = 0 ; j  < n_edges ; j++){
                    		if(prerequisites[j][1] == i)mp[prerequisites[j][0]]--;
                	}
            	}
        	}
        }
        
        return (result.size() == numCourses) ? result : vector<int>{};  
    }
};
