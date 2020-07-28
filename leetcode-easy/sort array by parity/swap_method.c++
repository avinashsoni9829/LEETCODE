class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
         ios::sync_with_stdio(false);
         cin.tie(NULL);
        int n=A.size();
        int low=0;
        for(int i=0;i<n;++i)
        {
            if(~A[i]&1)
            {
                swap(A[low],A[i]);
                low+=1;
            }
        }
        return A;
    }
};
