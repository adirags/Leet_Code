class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int size = nums.size();
        int i,j, count = 0;
        sort( nums.begin(), nums.end() );
        j = nums[0] - 1;
        for(i=0; i<size+count; i++) {
            if(nums[i] > j) {
                j = nums[i];
                nums.insert(nums.begin()+count, nums[i]);
                ++count;
            }
        }
        return count;
    }
};
