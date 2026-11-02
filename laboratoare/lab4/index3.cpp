class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int lo = 0;
        int hi = nums.size() - 1;
        while (lo < hi) {
            if (nums[lo] % 2 == 0) {
                lo++;
            } else if (nums[hi] % 2 == 1) {
                hi--;
            } else {
                int tmp = nums[lo];
                nums[lo] = nums[hi];
                nums[hi] = tmp;
                lo++;
                hi--;
            }
        }
        return nums;
    }
};