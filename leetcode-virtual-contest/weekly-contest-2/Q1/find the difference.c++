class Solution {
public:
    char findTheDifference(string s, string t) {
        
        map<char,int>mp1;
        map<char,int>mp2;
        
        for(auto x:s)
           mp1[x]++;
        for(auto x:t)
            mp2[x]++;
        
        for(auto c:mp2)
        {
            char check=c.first;
            if(mp2[check]!=mp1[check])
                return check;

        }
       
       
       return ' '; 
    }
};
