// using count
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int *arr = new int[n];
        for(int i = 0; i<n; i++){
            arr[i] = 0;
        }
        for(int i = 0; i<n; i++){
            arr[nums[i]]++;
            if(arr[nums[i]] > 1) return nums[i];
        }
        return -1;
    }
};

/*

Using a counting arr (hashing)

TC  O(N)
SC  O(N)

*/