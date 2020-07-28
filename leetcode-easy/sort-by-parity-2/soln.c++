//brute force
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {

        int n=A.size();
        vector<int> odd,even;
        for(auto x:A)
        {
            if(~x&1)
                even.push_back(x);
            else
                odd.push_back(x);
        }
        int l=0,r=0;
        for(int i=0;i<n;++i)
        {
            if(i%2)
            {
                A[i]=odd[r];
                r+=1;
            }
            else
            {
                A[i]=even[l];
                l+=1;
            }
        }

        return A;


    }
};
