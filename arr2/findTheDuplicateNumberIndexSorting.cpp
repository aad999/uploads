 public static int findDuplicate_index_sort(int[] nums) {
    int len = nums.length;
    for (int i = 0; i < len; ) {
        int n = nums[i];
        if (n == i + 1) {
            i++;
        } else if (n == nums[n - 1]) {
            return n;
        } else {
            nums[i] = nums[n - 1];
            nums[n - 1] = n;
        }
    }

    return 0;

/*

traverse i = 0 --> i < len
we have to sort the nums[] array
we are given with 1-n unique numbers,
and one duplicate number as (n+1)th number in the array

assuming all elements of being unique
our sorted array must look like

nums[0] nums[1] nums[2] nums[3] nums[4] nums[5] ...
    1       2       3       4       5       6

say in our array, nums[i] = i + 1
    that means nums[i] is in correct position
    that means proceed to the next element
else
    | if(nums[i] is not same as nums[n-1])
    |       then swap(nums[i] and nums[n-1])
    | else
    |       that means nums[i] has a duplicate,
    |       and that is present at nums[n-1]
    |       so return nums[i]


*/

}

/*

Using index sort

TC  O(N)
SC  O(1)

*/