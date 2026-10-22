class MinStack {
public:
    MinStack() = default;
    void push(int val) {
        data_.push_back(val);
        int current_elem  = min_elem_.empty() ? val : std::min(val, min_elem_.top());
        min_elem_.push(current_elem);
    }
    void pop() {
        data_.pop_back();
        min_elem_.pop();
    }
    int top() {
        return data_.back();
    }
    int getMin() {
    return min_elem_.top();
    }
 private:
    std::vector<int> data_;
    std::stack<int> min_elem_;
};
