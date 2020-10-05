class Solution {
public:
    
    int bitwiseComplement(int N) {
        if(N==0)
            return 1;
        
        int no_of_bits=floor(log2(N))+1;
        
        return ((1<<no_of_bits)-1)^N;
        
    }
};
