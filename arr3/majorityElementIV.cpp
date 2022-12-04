class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = INT_MIN;
        int votes = 0;
        for(int i=0; i<nums.size(); i++){
            int currVote = nums[i];
            // currVote is the vote of current element
            if(votes == 0){ // if
                // there is no clear majority
                // in previous subarray
                // then
                majority = currVote;
                // set currVote as majority 
                votes++;
                // increment votes of the majority
            }
            else{ // or else
                // there is a majority
                // in previous subarray
                if(currVote == majority){ // and if
                    // currVote goes to the majority
                    // then
                    votes++;
                    // increment votes of the majority
                }
                else{ // or else
                    // there is someone else in majority
                    // decrement votes of the majority
                    votes--;
                }
            }
        }
        int counter;
        for(int i=0; i<nums.size(); i++){
            int currVote = nums[i];
            if(currVote == majority){
                counter++;
                if(counter > nums.size()/2){
                    return majority;
                    // return majority,
                    // if number of votes exceed the criteria
                }
            }
        }
        return INT_MIN;
        // else return INT_MIN
    }
};