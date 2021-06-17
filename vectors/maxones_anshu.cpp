 int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> ones;
        int maxones = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0)
                ones.clear();
            else{
                ones.push_back(1);
                if(ones.size() > maxones)
                    maxones = ones.size();
            }
        }
        
        return maxones;
    }