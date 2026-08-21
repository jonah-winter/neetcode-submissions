class MinStack {
public:
    std::vector<int> mins;
    std::vector<int> vals;
    MinStack() {}
    
    void push(int val) {
        if (!vals.size()) {
            mins.push_back(val);
        } else {
            mins.push_back(std::min(mins.back(), val));
        }
        vals.push_back(val);
    }
    
    void pop() {
        vals.pop_back();
        mins.pop_back();
    }
    
    int top() {
        return vals.back();
    }
    
    int getMin() {
        return mins.back();
    }
};
