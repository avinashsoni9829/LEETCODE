class RecentCounter {
public:
    priority_queue<int,vector<int>,greater<int>> pq;
    
    RecentCounter() {
        while(!pq.empty())
        {
            pq.pop();
            
        }
        
        
    }
    
    int ping(int t) {
        while(!pq.empty())
        {
            if(pq.top() <(t-3000))
            {
                pq.pop();
            }
            else
                break;
        }
        pq.push(t);
        return pq.size();
        
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
