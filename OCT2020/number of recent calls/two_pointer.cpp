class RecentCounter {
public:
    vector<int>req;
    
    RecentCounter() {
        req.clear();
    }
    
    int ping(int t) {
        req.push_back(t);
        int l=0,r=req.size();
        
        while(l<r)
        {
            int m=l+((r-l)>>1);
            if(req[m]<(t-3000))
                l=m+1;
            else
                r=m;
        }
        return req.size()-l;
        
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
