class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sumArray; 
        int j; 
        for ( int i = 0; i < nums.size() - 1; i++ )
        {
             
            for (j = i + 1;  j < nums.size(); j++ )
             {
                int sum = nums[i] + nums[j];
                if (sum == target)
                {
                    sumArray.push_back(i); 
                    sumArray.push_back(j); 
                    return sumArray; 
                }
             } 
        }
        return sumArray; 
    }
};