/*

the algorithm stops whenever one of the character is not matching or any of the strings ends


method 1 ) brute force : check every string for each character
           time complextiy:O(no of string * length of minimum string)
           space complextiy: O(1)

=




*/

//word by word matching solution
class Solution {

    string f(string s,string t)
    {
        string res;
        int n=s.length();
        int m=t.length();
        if(s[0]!=t[0])
        return "";

        for(int i=0,j=0;i<n and j<m;++i,++j)
        {
            if(s[i]!=t[j])
                return res;
            res+=s[i];
        }

        return res;
    }

    string ans(vector<string>&strs)
    {
        int n=strs.size();

        string res=strs[0];
        for(int i=1;i<n;++i)
        {
            res=f(res,strs[i]);
        }

        return res;
    }


public:
    string longestCommonPrefix(vector<string>& strs) {
        return ans(strs);
    }
};




// this gives runtime error !
