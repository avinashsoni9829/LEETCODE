class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int n=A.size();
        stack<int>s;
        for(auto x:A)
            s.push(x);
        int l=0,r=n-1;
        while(!s.empty())
        {
            int tmp=s.top();
            s.pop();
            if(tmp&1)
            {
                A[r]=tmp;
                r-=1;
            }
            else
            {
                A[l]=tmp;
                l+=1;
            }
        }

        return A;
    }
};
