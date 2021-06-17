int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxones = 0,count = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0)
                count = 0;
            else{
               count++;
               maxones = max(maxones, count);
            }
        }
        
        return maxones;
    }