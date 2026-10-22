class MinStack {
public:
    MinStack() {
        
    }
    
    void push(int val) {
        data_.emplace_back(val);
        
    }
    
    void pop() {
        data_.pop_back();
    }
    
    int top() {
        return data_[data_.size()-1];
    }
    
    int getMin() {
        if (!data_.empty()) {
    auto min_it = std::min_element(data_.begin(), data_.end());
    auto min_val = *min_it; // Dereference to get the actual value
    return min_val;
}
    }
 private:
 std::vector<int> data_;
};
