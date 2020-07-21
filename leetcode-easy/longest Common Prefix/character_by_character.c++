//charcter by character matching
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int mn=INT_MAX;
        int n=strs.size();
        string ans;
        char c;
        for(auto s:strs)
        {
            if(s.length()<mn)
            mn=s.length();
        }
        


        for(int i=0;i<mn;++i)
        {
            c=strs[0][i];
            for(int j=1;j<n;++j)
            {
                if(strs[j][i]!=c)
                return ans;

            }
             ans.push_back(c);

        }



        return ans;



    }
};
