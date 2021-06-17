class Solution {
public:
    int longestPalindrome(string s) {
        int oddcount = 0;
        unordered_map<char,int> freq;
        for(int i=0; i<s.size(); i++)
            freq[s[i]]++;
        int no_of_palin = 0;
        for(auto entry:freq){
            if(entry.second % 2 == 0)
                no_of_palin += entry.second; 
            else{
                if(oddcount == 0){
                    no_of_palin += entry.second;
                    oddcount = 1;
                }
                else{
                    no_of_palin += entry.second - 1;
                }
            }
        }
        return no_of_palin;
    }
};