/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        vector<vector<int>>ans;
        
        // base condition
        if(!root)
            return ans;
        
        // queue is made
        queue<TreeNode*>q;
        
        
        // push the root node
        q.push(root);
        
        while(!q.empty())
        {
            
            
            int sz=q.size();
            
            //temporary vector is made 
            vector<int>temp(sz);
            
            for(int i=0;i<sz;++i)
            {
                TreeNode * curr=q.front();
                q.pop();
                
                temp[i]=curr->val;
                // if the left child exists
                if(curr->left)
                    q.push(curr->left);
                
                // if the right child exists
                if(curr->right)
                    q.push(curr->right);
            }
            
            // push temp to ans vector
            ans.push_back(temp);
        }
        
        //finally reverse the ans vector 
        
        reverse(ans.begin(),ans.end());
        
        return ans;
        
    }
};
