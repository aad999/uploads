#include <bits/stdc++.h> 
#include <bits/stdc++.h> 


int findDuplicate(vector<int> nums) {
    int len = nums.size();
    if(len == 0 || len == 1){
        return -1;
    }
    int nstatus = len;
    for(int i = 0; i<len; i++){
        int x = nums[i]>0 ? nums[i] : -1*nums[i];
        if(x == len){
            if(nstatus < 0){
                return len;
            }
            nstatus = -len;
            continue;
        }
        if(nums[x] < 0){
            // x is d
            return x;
        }
        nums[x] = -1*nums[x];
    }
    return -1;
}

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int repeatedNumber = findDuplicate(arr);
    if(repeatedNumber == -1) return make_pair(-1, -1);
    int expectedSum = (n*(n+1))/2;
    int actualSum = 0;
    for(int i = 0; i<n; i++){
        actualSum += arr[i];
    }
    // actualSum - repeatedNumber + missingNumber = expectedSum
    // => missingNumber = expectedSum + repeatedNumber - actualSum
    int missingNumber = expectedSum+repeatedNumber-actualSum;
    pair<int, int> ans;
    ans.first = missingNumber;
    ans.second = repeatedNumber;
    return ans;
}
