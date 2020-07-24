class Solution {
public:
    int arrangeCoins(int n) {
    
        long long k=sqrt(2*(long long)n);
        long long res= (k)*(k+1);
            if((res/2)>n)
                return k-1;
             return k;

                
                
      
        
    }
};
