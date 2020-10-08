class Solution {
public:
    int search(vector<int>&a, int target) {
        
        int low=0,high=a.size();
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            
            if(a[mid]==target)
                return mid;
            
            if(a[mid]>target)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        
        return -1;
        
        
    }
};
