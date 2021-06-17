class Solution {
    vector<string> words(const string &a){
        vector<string> vec;
        string str="";
        for(int i=0; i<a.size(); i++){
            if(a[i]  == ' '){
                vec.push_back(str);
                str="";
            }
            else
                str+=a[i];
            if(i==a.size()-1){
                vec.push_back(str);
            }
        }
        return vec;
    }
public:
    bool wordPattern(string pattern, string s) {
        vector<string> w;
        w = words(s);
        if(w.size() != pattern.size())
            return false;
        
        unordered_map<char,string> charmap;
        unordered_set<string> mappedwords;
        for(int i=0; i<pattern.size(); i++){
            if(!charmap.count(pattern[i])){
                if(mappedwords.count(w[i]))
                    return false;
                charmap[pattern[i]] = w[i];
                mappedwords.insert(w[i]);
            }
            else{
                if(charmap[pattern[i]] != w[i])
                    return false;
            }
        }
        return true;    
    }
};





