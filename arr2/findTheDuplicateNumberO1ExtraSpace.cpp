class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int len = nums.size();
        if(len == 0 || len == 1){
            return -1;
        }
        for(int i = 0; i<len; i++){
            int x = nums[i]>0 ? nums[i] : -1*nums[i];
            /*
as we know,
the duplicate number d will appear twice in the array
that means we will get two chances to access nums[d],
during the traversal from left to right

if we are keeping a track of traversed elements,
by making traversed elements negative in each iteration,
then when first d will appear, nums[d] will become negative
and when d will appear again,
we will be having nums[d] as negative previously
so that means d is appearing twice,
hence we will return d
            */
            if(nums[x] < 0){
                // x is d
                return x;
            }
            nums[x] = -1*nums[x];
        }
        return -1;
    }
};

/*

TC  O(N)
SC  O(1)

*/