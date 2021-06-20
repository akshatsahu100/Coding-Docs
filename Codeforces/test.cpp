class Solution {
public:
    int find(vector<int> &presum, unordered_map<int,int> &occ, int target){
        int ans = INT_MAX;
        for(int i=0; i<presum.size(); i++){
            if(occ.count(presum[i] - target)){
                ans = min(ans, i - occ[presum[i] - target]);
            }
            occ[presum[i]] = i;
        }
        return ans;
    }
    int minSubArrayLen(int target, vector<int>& nums) {
        vector<int> presum(nums.size());
        unordered_map<int,int> occ;
        presum[0] = nums[0];
        occ[presum[0]] = 0;
        occ[0] = -1;
        int ans = INT_MAX;
        for(int i=1;i<nums.size(); i++){
            presum[i] = presum[i-1] + nums[i];
            occ[presum[i]] = i;
        }
        int s = target, e = presum[nums.size() - 1];
        cout<<find(presum, occ, target);
        while(s<=e){
            int mid = (s + e)/ 2;
            int temp_ans = find(presum, occ, mid);
            ans = min(ans, temp_ans);
            if(temp_ans == INT_MAX){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        if(ans == INT_MAX)
            return 0;
        return ans;
    }
};