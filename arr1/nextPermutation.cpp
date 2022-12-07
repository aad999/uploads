class Solution {
public:
    void nextPermutation(vector<int>& nums){



/*



from end, keep checking, where the sequence stops increasing

e.g. 5  9   3   7   6   4   1
                <------------
                7   6   4   1   is the longest increasing sequence
                                in the given array
                                looking from backward;

now reverse that sequence

=>  5   9   3   1   4   7   6
            *   <------------   now the nearest number
                                must be increased (i.e., 3);
                                swap 3
                                with its nearest greatest number from {1,4,7,6};

=>  5   9   4   1   3   7   6

Hence got the required number.


This is same as we have a number AB (like 49)
and when we cannot increase B (there doesn't exists bigger digit than 9)
then decrease B to minimum, increase A, to get the next nearest value


(593)(7641)
cannot increase (7641) more
so make that sequence minimum => (1467)
now increase (593) to its next available value
that is (594)


*/



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