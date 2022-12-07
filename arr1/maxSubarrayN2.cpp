class Solution {
public:
    int maxSubArray(vector<int>& nums) {





        // make a separate vector sums
        // such as sums[i] = sum of all element in nums upto i;
        // initialize integer variable maxsum = max(sums);
        // now for subarray (i, j]
        // sum of the subarray is (sums[j] - sums[i]);
        // now return max(maxsum, max(sum[j] - sum[i]));





        int n = nums.size();
        vector<int> sums;
        sums.push_back(nums[0]);
        for(int i = 1; i<n; i++){
            int back = sums.back();
            sums.push_back(back + nums[i]);
        }
        int max = INT_MIN;
        for(int j = 0; j<n; j++){
            int sum = sums[j] - 0;
            max = sum > max ? sum : max;
        }
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                int sum = sums[j] - sums[i];
                max = sum > max ? sum : max;
            }
        }
        return max;
    }
};