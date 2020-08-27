class Solution {
public:
    
    //time : O(1)
    //bitmasking based solution
    bool isPowerOfFour(int num) {
        
        if(num>0)
        {
            if(!(num&(num-1)))
            {
                if( !(num & 0xaaaaaaaa))
                    return true;
            }
        }
        
        return false;
        
    }
};
