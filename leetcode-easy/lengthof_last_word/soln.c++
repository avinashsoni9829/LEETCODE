class Solution {
public:
    int lengthOfLastWord(string s) {
     int ans=0,n=s.length()-1;
        while(n>=0 and s[n]==' ')
            --n;
        while(n>=0 and s[n]!=' ')
        {
            ++ans;
            --n;
        }

        return ans;a

    }
};
