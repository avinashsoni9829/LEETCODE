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
    int countNodes(TreeNode* root) {

    int nodes=1;
    queue<TreeNode*>q;

     if(root)
     {
       q.push(root);
     }

     while (!q.empty()) {
       for(int i=q.size()-1;i>=0;--i)
       {
         TreeNode * cur=q.front();
         q.pop();
         if(cur->left)
         {
           q.push(cur->left);
           nodes++;
         }
         else
         {
           return nodes;
         }

         if(cur->right)
         {
           q.push(cur->right);
           nodes++;
         }
         else
         {
           return nodes;
         }
       }
     }

        return 0;
        
  }
};
