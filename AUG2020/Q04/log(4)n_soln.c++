class Solution {
public:
    //set bit method 
    // time : log4(n)
    
    bool isPowerOfFour(int num) {
        
        if(num<1)return false;
        int tmp=num,cnt=0;
        while(tmp>1)
        {
            tmp>>=2;
            cnt+=2;
        }
        tmp<<=cnt;
        
        if(tmp==num)
            return true;
        return false;
        
    }
};
