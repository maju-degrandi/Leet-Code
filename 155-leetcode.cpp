class MinStack {
private:
    vector<int> st;
    int count = -1;
    int minGlobal;
    vector<int> min;
public:
    MinStack() {
    }
    
    void push(int val) {
        st.push_back(val);
        if(count == -1 || val < minGlobal) minGlobal = val;
        min.push_back(minGlobal);
        count++;
    }
    
    void pop() {
        if(count >= 0) 
        {
            st.erase(st.begin() + count);
            min.erase(min.begin() + count);
            count--;
            if(count >= 0) minGlobal = min[count];
        }
    }
    
    int top() {
        return st[count];
    }
    
    int getMin() {
        return min[count];
    }
};
