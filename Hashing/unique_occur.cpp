class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq, freq_occur;
        for(int i=0; i<arr.size(); i++)
            freq[arr[i]]++;
        
        for(auto i:freq)
            freq_occur[i.second] = 1;
        
        return freq.size() == freq_occur.size();
    }
};