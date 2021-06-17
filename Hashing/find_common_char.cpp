class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<vector<int>> alphamat(words.size(), vector<int> (26,0));
        
        for(int i=0; i<words.size(); i++){
            for(int j=0; j<words[i].size(); j++){
                alphamat[i][words[i][j] - 'a']++;
            }
        }
        vector<string> ans;
        string temp = "";
        int row = 0, col = 0;
        while(col<26){
            int m = INT_MAX;
            for(int i=0; i<words.size(); i++)
                m = min(m, alphamat[i][col]);
            for(int i=0; i<m; i++){
                int x = col + 'a';
                char str = x;
                ans.push_back(temp + str);
            }
            col++;
        }
        return ans;
    }
};