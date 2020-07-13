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
 #define pb push_back;
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {

    if(!root)
    return {};

    vector<vector<int>>ans;
    queue<TreeNode*>q;
    vector<int>curr;
    q.push(root);

    do {
      q.push(nullptr);
      while(q.front()!=nullptr)
      {
        curr.push_back(q.front()->val);

        if(q.front()->left)
        q.push(q.front()->left);
        if(q.front()->right)
        q.push(q.front()->right);
        q.pop();
      }
      q.pop();
      ans.push_back(curr);
      curr.clear();

    } while(!q.empty());

    reverse(ans.begin(),ans.end());
    return ans;
  }

};
