class Solution {
public:
    // time : O(1)
    // basic bit manipulation based solution
    bool isPowerOfFour(int num) {
     
        if( num>0 and (num&(num-1))==0 and num%3==1)
            return true;
        return false;
        
    }
};
