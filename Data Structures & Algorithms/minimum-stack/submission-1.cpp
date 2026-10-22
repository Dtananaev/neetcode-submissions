class MinStack {
public:
    MinStack() {
        
    }
    
    void push(int val) {
        data_.push_back(val);
        // Min element
        if (min_elem_.empty()){
            min_elem_.push(val);
        }else{
            if (min_elem_.top() > val){
                min_elem_.push(val);
            }else{
                 min_elem_.push(min_elem_.top());
            }

        }
        
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
