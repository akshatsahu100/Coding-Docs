class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> mymap;
        for(int i=0; i<jewels.size(); i++)
            mymap[jewels[i]]++;
        
        int count = 0;
        for(int i=0; i<stones.size(); i++){
            if(mymap.count(stones[i])){
                count++;
            }
        }
        return count;
    }
};