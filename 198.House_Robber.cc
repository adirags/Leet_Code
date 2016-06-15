class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int loot[n];
        switch(n) {
            case 0:     return 0;
            case 1:     return nums[0];
            case 2:     return max(nums[0],nums[1]);
            default:    int i;
                        loot[0] = nums[0];
                        loot[1] = max(nums[0],nums[1]);
                        for(i=2; i<n; i++) {
                            loot[i] = max(loot[i-2]+nums[i], loot[i-1]);
                        }
    }
    return loot[n-1];
    }
};
