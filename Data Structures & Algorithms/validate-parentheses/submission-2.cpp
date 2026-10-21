class Solution {
public:
    bool isValid(string s) {
        // Corner case odd number of values
        if (s.size() % 2 != 0) return false;

        std::stack<char> data;
        for (char c : s){
            // if we have open bracket
            if(c =='{' || c =='(' || c == '['){
                data.push(c);
            }else{ // otherwise
                // Corner case if closing bracket and my stack is empty
                if (data.empty()) return false;
                char top = data.top();
                if ((top == '{' & c =='}') ||
                (top == '(' & c ==')') ||
                (top == '[' & c ==']')){
                    data.pop();
                }else{
                    return false;
                }
            }
        }           
        return data.empty();
    }

};
