class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0, count = 0;
        unordered_map<int,int> freq;
        vector<int> presum(nums.size(), 0);
        presum[0] = nums[0];
        freq[0]++;
        
        if(freq.count(presum[0] - k))
            count++;
        freq[presum[0]]++;
        
        for(int i=1; i<nums.size(); i++){
            presum[i] = presum[i-1] + nums[i];
            if(freq.count(presum[i] - k))
                count += freq[presum[i] - k];
            freq[presum[i]]++;
        }
        
        return count;
    }
};