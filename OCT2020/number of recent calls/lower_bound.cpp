class RecentCounter {
public:
    vector<int>req;
    
    RecentCounter() {
        req.clear();
        
        
    }
    
    int ping(int t) {
        
        req.push_back(t);
        if(req.size()==1)
        return 1;
        
        int f=lower_bound(req.begin(),req.end(),t-3000)-req.begin();
        int s=lower_bound(req.begin(),req.end(),t)-req.begin();
        
        return (s-f+1);
        
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
