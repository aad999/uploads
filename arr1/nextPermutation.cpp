class Solution {
public:
    void nextPermutation(vector<int>& nums){
        int n = nums.size();
        if(n == 0 || n == 1){
            return;
        }
        int pivot = n-2;
        while(pivot >= 0){
            if(nums[pivot + 1] > nums[pivot]) break;
            pivot--;
        }
        if(pivot < 0){
            reverse(nums.begin(), nums.end());
            return;
        }
        int successor = n-1;
        while(successor > pivot){
            if(nums[successor] > nums[pivot]) break;
            successor--;
        }
        swap(nums[pivot], nums[successor]);
        reverse(nums.begin()+pivot+1, nums.end());
        return;
    }
};