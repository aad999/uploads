class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max = nums[0];
        int currSum = 0;
        for(int i = 0; i<n; i++){
            currSum += nums[i];
            max = max > currSum ? max : currSum;
            currSum = currSum < 0 ? 0 : currSum;            
        }
        return max;
    }
};