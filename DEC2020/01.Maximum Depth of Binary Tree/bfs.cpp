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
    int maxDepth(TreeNode* root) {
        //base conditon
        int depth=0;
        if(!root)
            return depth;
        
        queue<TreeNode*>q;
        
        q.push(root);
        
        while(!q.empty())
        {
            depth+=1;
            int n=q.size();
            for(int i=0;i<n;++i)
            {
                TreeNode * curr=q.front();
                q.pop();
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
                
            }
        }
        
        return depth;
        
        
    }
};
