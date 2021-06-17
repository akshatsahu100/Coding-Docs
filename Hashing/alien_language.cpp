class Solution {
public:
    bool insequence(string &word1, string &word2, unordered_map<char,int> &dic){
        int ptr1 = 0, ptr2 = 0;
        while(ptr1 < word1.size() && ptr2 < word2.size()){
            if(dic[word1[ptr1]] > dic[word2[ptr2]])
                return false;
            else if(dic[word1[ptr1]] < dic[word2[ptr2]])
                return true;
            else{
                ptr1++;
                ptr2++;
            }
        }
        if(word1.size() > word2.size())
            return false;
        return true;
    }
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> dic;
        int count = 0;
        for(int i=0; i<order.size(); i++)
            dic[order[i]] = count++;
    
        for(int i=0; i<words.size()-1; i++){
            string word1 = words[i];
            string word2 = words[i+1];
            bool result = insequence(word1, word2, dic);
            if(result == false)
                return false;
        }
        
        return true;
    }
};