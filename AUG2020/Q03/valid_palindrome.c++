class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(auto c:s)
        {
            if(isalnum(c))
                temp+=c;
        }
        
        
        
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
         
        int l=0,r=temp.length()-1;
        
        while(l<=r)
        {
            if(temp[l]==temp[r])
            {
                l++;
                r--;
            }
            else
                return false;
        }
        return true;
        
    }
};
