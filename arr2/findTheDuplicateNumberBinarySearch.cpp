 public static int findDuplicate_bs(int[] nums) {

/*

say the numbers less than or equal to mid in the array is N

if in 1-mid, all the numbers are uniquely present in the array,
then the value of N must be equal to mid

if N is not mid and is less than mid,
    that means there is a pair of duplicates,
    in the range 1-mid
    so our required number is less than mid

else our required number is more than mid


*/

    int len = nums.length;
    int low = 1;
    int high = len - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        int cnt = 0;
        for (int i = 0; i < len; i++) {
            if (nums[i] <= mid) {
                cnt++;
            }
        }

        if (cnt <= mid) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    return low;
}

/*

Using binary search

TC  O(Nlog(N))
SC  O(1)

*/