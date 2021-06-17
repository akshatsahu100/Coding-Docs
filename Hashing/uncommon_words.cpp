
class Solution {
public:
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
    vector<string> uncommonFromSentences(string A, string B) {
        unordered_map<string,int> wordfreq;
        vector<string> a,b,c;
        a=words(A);
        b=words(B);
        
        for(int i=0; i<a.size(); i++){
            wordfreq[a[i]]++;
        }
        for(int i=0; i<b.size(); i++){
            wordfreq[b[i]]++;

        } 
        for(auto i:wordfreq){
            if(i.second == 1)
                c.push_back(i.first);
        }
        return c;
        
    }
};