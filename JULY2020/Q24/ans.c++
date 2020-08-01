class Solution {
public:
    void dfs(vector<vector<int> >& graph, int u, vector<vector<int> > &res, vector<int> &currPath, vector<bool> &recStack)
    {
		if(u == graph.size() - 1)  
            // check if the current node is the (N-1)th node
        {
            currPath.push_back(u); 
            //  push the last node into the currPath;
            res.push_back(currPath);  
            //  push the current path into the final answer
            currPath.pop_back();  
            //  pop the last node from the currPath
            return ;
        }
        recStack[u] = true; 
        //  add the current node to recursion stack
        currPath.push_back(u);  
        //  add the current node the current path
        
        for(int i = 0; i < graph[u].size(); i++)  
            //  traverse the neighbors of current node
            if(!recStack[graph[u][i]])   //   if the neighbor is not in the recursion stack call dfs on the neighbor
                dfs(graph, graph[u][i], res, currPath, recStack);
        currPath.pop_back();  //   on the way back remove the current node from the current path
        recStack[u]=false;  //  remove the current node from the recursion stack
        return;
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int> > res;   //   to store the final result
        vector<int> currPath;   //   to store the current path
        vector<bool> recStack(graph.size(), false);   //  to keep track of nodes in the recursion stack of DFS
        dfs(graph, 0, res, currPath, recStack);
        return res;
    }
};
