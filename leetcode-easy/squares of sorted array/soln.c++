class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        ios::sync_with_stdio(false); cin.tie(NULL); 
        int n=A.size();
        
        vector<int>merge(n);
        int l=0,r=n-1,k=n-1;
        
        while(l<=r)
        {
            if(pow(A[l],2)<=pow(A[r],2))
            {
                merge[k]=pow(A[r],2);
                r-=1;
            }
            else
            {
                merge[k]=pow(A[l],2);
                l+=1;
            }
            
            k-=1;
            
        }
        return merge;
        
    }
};
