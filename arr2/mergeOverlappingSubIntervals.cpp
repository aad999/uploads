class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        vector<int> prev = arr[0];
        char status = 'u';
        for(int i = 1; i<n; i++){
            vector<int> curr = arr[i];
            int a = prev[0]; int b = prev[1];
            int c = curr[0]; int d = curr[1];

/*

we have previous interval [a,b] and current interval [c,d]
we can say a <= c always because,
we have previously sorted the matrix as per their leading column

now
if(c belongs to 1st interval)
    club both the intervals into [a, max(c,d)]
    and update previous to the clubbed interval
    and update status of the previous interval to of being a clubbed one
or else
    push back previous into the answer
    and update previous to the current interval
    and update status of the previous interval to of being an unclubbed one

*/

            if(c >= a && c <= b){
                prev[0] = a;
                prev[1] = b>d ? b : d;
                status = 'c';
            }
            else{
                ans.push_back(prev);
                prev[0] = c;
                prev[1] = d;
                status = 'u';
            }
        }
        ans.push_back(prev);
        return ans;
    }
};