class Solution {
public:
uint32_t reverseBits(uint32_t n) {

    uint32_t ans=0;
    
    
    for(int i=0;i<(1<<5);i++){
        
        int set_bit= n&(1<<i);
        
        if(set_bit){
            ans|= (1<<31-i); // set 31-i bit to 1
        }
    }
    
    return ans;
}
};
