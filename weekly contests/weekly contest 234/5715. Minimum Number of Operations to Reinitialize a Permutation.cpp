class Solution {
public:
    int reinitializePermutation(int n) {
        
        vector<int>perm(n);
        vector<int>check(n);
        for(int i=0;i<n;++i)
        {
              perm[i]=i;
              check[i]=i;
        }
        
        
        vector<int>a(n);
        
        int steps=0;
        
        while(a!=perm)
        {
             for(int i=0;i<n;++i)
             {
                   if(i%2==0) a[i]=check[i/2];
                   else
                         a[i]=check[n/2+(i-1)/2];
                 
             }
            
             check=a;
            
            steps+=1;
            
            
        }
        
        
        return steps;
    
    }
};
