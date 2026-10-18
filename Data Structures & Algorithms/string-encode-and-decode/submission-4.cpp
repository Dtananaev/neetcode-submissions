class Solution {
public:

    string encode(vector<string>& strs) {
        ostringstream ss;
        for (const string& s : strs){
            ss<<s.size()<<"#"<<s;
        }
        return ss.str();
    }

    vector<string> decode(string s) {
        vector<string> v;
        size_t size;
        char delim;
        istringstream ss(s);
        
        while(ss>>size>>delim){
            string temp(size,'\0');
            ss.read(&temp[0], size);
            v.emplace_back(std::move(temp));
        }

    return v;
    }
};
