class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counter;
        for(int i = 0; i<nums.size(); i++){
            if(++counter[nums[i]] > nums.size()/2){
                return nums[i];
            }
        }
        return 0;
    }
};

// hashmap technique