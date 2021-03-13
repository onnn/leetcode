class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int lastSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            lastSum += nums[i];
            nums[i] = lastSum;
        }

        return nums;
    }
};