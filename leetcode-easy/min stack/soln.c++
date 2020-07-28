class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> st;
    stack<int> st_m;
    MinStack() {

    }

    void push(int x) {
        st.push(x);
        if(st_m.empty())
        {
            st_m.push(x);
        }
        else
        {
            st_m.push(min(st_m.top(),x));
        }

    }

    void pop() {
        st.pop();
        st_m.pop();

    }

    int top() {
        return st.top();

    }

    int getMin() {
        return st_m.top();

    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
