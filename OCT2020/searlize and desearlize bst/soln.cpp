/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    	// Encodes a tree to a single string.
	string serialize(TreeNode* root) {	
        if(!root) return "#"; // ending character
        
		// seperator character - /
        return to_string(root->val) + '/' + serialize(root->left) + '/' + serialize(root->right);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data == "#") return nullptr;
        
        stringstream stream(data);
        return helper(stream);
    }
    
    TreeNode* helper(stringstream& data) {
        string s;
        getline(data, s, '/');  // consume data until next seperator character '/'
        if(s == "#") return nullptr; // if we reach '#', then it means we reached the end
		
		// then keep repeating process recursively in the preorder way.
        TreeNode* root = new TreeNode(stoi(s));
        root->left = helper(data); 
        root->right = helper(data);
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;
