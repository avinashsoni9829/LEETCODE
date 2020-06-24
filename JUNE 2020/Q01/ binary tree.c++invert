/*
       4                     4
     /  \                   / \
   2     7     ->           7    2
 /  \   / \              / \   / \
1   3  6  9            6   9  1   3




*/

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
    TreeNode* invertTree(TreeNode* root) {

      //base condition
      if(root==NULL)
      return NULL;

      TreeNode * temp=invertTree(root->left);
      TreeNode * temp1= invertTree(root->right);

      root->left=temp1;
      root->right=temp;

      return root;


    }

};
