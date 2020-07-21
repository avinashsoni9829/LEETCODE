class Node
{
  public:
    bool ends;
    unordered_map<char,Node*> children;

    Node()
    {
        ends=false;
    }
};

class Trie
{
  public:
    Node root;

    void insert(string word)
    {
        Node* cur = &(this->root);

        for (char c:word)
        {
            if (cur->children.find(c) == cur->children.end())
                cur->children.insert({c,new Node()});

            cur = cur->children[c];
        }

        cur->ends=true;
    }

    string prefix()
    {
        string ans;

        Node* cur = &(this->root);

        while (cur->children.size()==1)
        {
            char c = cur->children.begin()->first;
            if (c=='$') return ans;
            ans += c;
            cur = cur->children.begin()->second;
        }

        return ans;
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        Trie myTrie;

        for (string w:strs)
        {
            myTrie.insert((w+'$'));
        }

        return myTrie.prefix();
    }
};
