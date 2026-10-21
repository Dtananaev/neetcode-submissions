class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;

        std::unordered_map<char, char> m;
        m[')'] = '(';
        m['}'] = '{';
        m[']'] = '[';



        for (char c : s){

            if(!st.empty()){

                const auto& it = m.find(c);


                if (it!=m.end()){
                    
                    if (st.top()==it->second){
                        st.pop();
                    }else{
                        return false;
                    }

                }else{
                    st.push(c);
                }

            }else{
                st.push(c);
            }

        }
    
        if (st.empty()){
            return true;
        }else{
            return false;
        }

        
    }
};
