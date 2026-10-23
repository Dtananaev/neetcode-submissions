class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        std::stack<int> numbers;
        for(const string& c : tokens){
            if ((c == "+") || (c == "-") || (c == "*") || (c == "/")){
                int right = numbers.top();
                numbers.pop();
                int left = numbers.top();
                numbers.pop();

                if (c == "+") numbers.push(left + right);
                if (c == "-") numbers.push(left - right);
                if (c == "*") numbers.push(left * right);
                if (c == "/") numbers.push(left / right);

            }else{
                numbers.push(stoi(c));
            }
        }
        return numbers.top();
    }
};
