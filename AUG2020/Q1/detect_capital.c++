class Solution {
public:
    bool detectCapitalUse(string word) {
        
        // case 1: all capitals
        bool flag1=false,flag2=false,flag3=false;
        for(auto c:word)
        {
            if(c>=65 and c<=90)
            {
                flag1=true;
                continue;
            }
            else
            {
                flag1=false;
                break;
            }
            
           
        }
        // all small
         for(auto c:word)
        {
            if(c>=96 and c<=122)
            {
                flag2=true;
                continue;
            }
            else
            {
                flag2=false;
                break;
            }
            
           
        }
        
        
        if(word[0]>=65 and word[0]<=90)
        {
            for(int i=1;i<word.length();++i)
            {
                
                 if(word[i]>=96 and word[i]<=122)
            {
                flag3=true;
                continue;
            }
            else
            {
                flag3=false;
                break;
            }
            }
        }
        
        
        if(flag1 or flag2 or flag3)
            return true;
        return false;
        
    }
};
