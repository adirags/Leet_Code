class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        switch(n) {
            case 0: return 0;
            case 1: return nums[0];
            case 2: return max(nums[0], nums[1]);
            default:int i;
                    int loot[n];
                    loot[0] = nums[0];
                    loot[1] = max(nums[0], nums[1]);
                    for(i=2; i<n-1; i++) {  //Iterating till n-2 since the houses are circularly ordered => House_1 neighbors House_n-1
                        loot[i] = max(loot[i-1], loot[i-2]+nums[i]);
                    }
                    int contender_1 = loot[n-2];
                    int prev, cur;
                    prev = nums[1];
                    cur = max(nums[1], nums[2]);
                    for(i=3; i<n; i++) {    //Iterating from House_2 through to House_n
                        int temp = cur;
                        cur = max(prev+nums[i], cur);
                        prev = temp;
                    }
                    int contender_2 = cur;
                    return max(contender_1, contender_2);
        }
    }
};
